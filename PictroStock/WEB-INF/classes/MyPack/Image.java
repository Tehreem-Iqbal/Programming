package MyPack;

import java.io.*;

public class Image implements Serializable {

    private String imageId;
    private String user;
    private String path;
    private Boolean isBlocked;

    public Image() {
        imageId = "";
        user = "";
        path = "";
        isBlocked = false;
    }

    public String getImageId() {
        return imageId;
    }

    public void setImageId(String imageId) {
        this.imageId = imageId;
    }

    public String getuser() {
        return user;
    }

    public void setuser(String user) {
        this.user = user;
    }

    public String getPath() {
        return path;
    }

    public void setPath(String path) {
        this.path = path;
    }

    public Boolean getisBlocked() {
        return isBlocked;
    }

    public void setisBlocked(Boolean imageId) {
        this.isBlocked = true;
    }

}
