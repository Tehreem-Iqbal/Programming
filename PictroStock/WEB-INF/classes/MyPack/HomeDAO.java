package MyPack;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.io.FileInputStream;
import java.sql.*;

public class HomeDAO {
    Connection connection;
    String sql;
    PreparedStatement ps;

    public HomeDAO() {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            connection = DriverManager.getConnection("jdbc:mysql://127.0.0.1/pictrostock", "root", "root");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    public Boolean userExistOrNot(String email) {
        try {
            sql = "SELECT * FROM user WHERE email=?";
            ps = connection.prepareStatement(sql);
            ps.setString(1, email);
            ResultSet rs = ps.executeQuery();
            if (rs.next())
                return true;
            else
                return false;
        } catch (Exception e) {
            System.out.println(e);
            return false;
        }
    }

    public Boolean addUser(User user) {
        try {
            sql = "INSERT INTO user VALUES(?,?,?)";
            ps = connection.prepareStatement(sql);
            ps.setString(1, user.getEmail());
            ps.setString(2, user.getUsername());
            ps.setString(3, user.getPassword());
            int r = ps.executeUpdate();
            if (r == 1) {
                sql = "INSERT INTO authentication VALUES(?,?,?)";
                ps = connection.prepareStatement(sql);
                ps.setString(1, user.getEmail());
                ps.setString(2, user.getPassword());
                ps.setInt(3, 1);
                r = ps.executeUpdate();
                if (r == 1)
                    return true;
                else
                    return false;

            } else
                return false;

        } catch (Exception e) {
            System.out.println(e);
            return false;
        }
    }

    public Boolean addContributor(User user) {
        try {
            sql = "INSERT INTO user VALUES(?,?,?)";
            ps = connection.prepareStatement(sql);
            ps.setString(1, user.getEmail());
            ps.setString(2, user.getUsername());
            ps.setString(3, user.getPassword());
            int r = ps.executeUpdate();
            if (r == 1) {
                sql = "INSERT INTO authentication VALUES(?,?,?)";
                ps = connection.prepareStatement(sql);
                ps.setString(1, user.getEmail());
                ps.setString(2, user.getPassword());
                ps.setInt(3, 2);
                r = ps.executeUpdate();
                if (r == 1)
                    return true;
                else
                    return false;

            } else
                return false;

        } catch (Exception e) {
            System.out.println(e);
            return false;
        }
    }

    public int authentication(String email, String password) {
        try {
            sql = "SELECT * FROM authentication WHERE email=? and password=?";
            ps = connection.prepareStatement(sql);
            ps.setString(1, email);
            ps.setString(2, password);
            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
                return rs.getInt("user_type");
            } else
                return -1;
        } catch (Exception e) {
            System.out.println(e);
            return -1;
        }
    }

    public User returnProfile(String email) {

        try {
            sql = "SELECT * FROM user WHERE email=?";
            ps = connection.prepareStatement(sql);
            ps.setString(1, email);
            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
                User user = new User();
                user.setEmail(rs.getString("email"));
                user.setUsername(rs.getString("name"));
                return user;
            } else {
                return null;
            }

        } catch (Exception e) {
            System.out.println(e);
            return null;
        }
    }

    public Boolean addImage(Image image) {
        try {
            sql = "INSERT INTO photos VALUES(?,?,?,?)";
            ps = connection.prepareStatement(sql);
            ps.setString(1, image.getImageId());
            ps.setString(2, image.getuser());
            FileInputStream fis = new FileInputStream(image.getPath());
            ps.setBinaryStream(3, fis, fis.available());
            ps.setBoolean(4, image.getisBlocked());
            int r = ps.executeUpdate();
            if (r > 0) {
                return true;
            } else {

                return false;
            }

        } catch (Exception e) {
            System.out.println(e);
            return false;
        }
    }

    public ArrayList<Image> showImages() {
        ArrayList<Image> images = new ArrayList<Image>();
        try {
            sql = "SELECT * FROM photos";
            ps = connection.prepareStatement(sql);
            ResultSet rs = ps.executeQuery();
            Image image;
            String path;
            while (rs.next()) {
                path = "Photos/";
                image = new Image();
                image.setImageId(rs.getString("photoId"));
                image.setuser(rs.getString("user"));
                path = path + image.getImageId();
                image.setPath(path);
                images.add(image);
            }
            return images;
        } catch (Exception e) {
            System.out.println(e);
            return images;
        }

    }

    public ArrayList<Image> showContributorImages(User user) {
        ArrayList<Image> images = new ArrayList<Image>();
        try {
            sql = "SELECT * FROM photos WHERE user=?";
            ps = connection.prepareStatement(sql);
            ps.setString(1, user.getEmail());
            ResultSet rs = ps.executeQuery();
            String path;
            Image image;
            while (rs.next()) {
                path = "Photos/";
                image = new Image();
                image.setImageId(rs.getString("photoId"));
                image.setuser(rs.getString("user"));
                path = path + image.getImageId();
                image.setPath(path);
                images.add(image);
            }
            return images;
        } catch (Exception e) {
            System.out.println(e);
            return images;
        }

    }

    public Boolean deleteImage(String imageid) {
        try {
            sql = "DELETE FROM photos WHERE photoId=?";
            ps = connection.prepareStatement(sql);
            ps.setString(1, imageid);
            System.out.println(imageid);
            int r = ps.executeUpdate();
            if (r > 0)
                return true;
            else
                return false;
        } catch (Exception e) {
            System.out.println(e);
            return false;
        }

    }

}
