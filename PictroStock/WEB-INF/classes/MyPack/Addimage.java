package MyPack;

import java.io.*;
import javax.servlet.http.*;
import javax.servlet.*;
import javax.servlet.annotation.*;

@MultipartConfig
public class Addimage extends HttpServlet {
    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {

        HttpSession session = request.getSession(false);
        try {
            HomeDAO homeDAO = new HomeDAO();
            Image image = new Image();
            Part file = request.getPart("image");
            String user = (String) session.getAttribute("email");
            String imageid = file.getSubmittedFileName();

            String path = "C:/Users/tehre/Desktop/Software-20220817T075609Z-001/apache-tomcat-8.5.40/webapps/pictro/Photos/"
                    + imageid;
            image.setImageId(imageid);
            image.setuser(user);
            image.setPath(path);
            if (homeDAO.addImage(image))
                response.sendRedirect("contributor.jsp?msg=Photo Uploaded successfully");

            else
                response.sendRedirect("contributor.jsp?msg=Photo cannot be uploaded");

        } catch (Exception e) {

        }
    }
}
