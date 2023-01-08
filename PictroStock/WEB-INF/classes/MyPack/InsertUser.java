package MyPack;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class InsertUser extends HttpServlet {

    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {

        User user = new User();
        user.setEmail(request.getParameter("email"));
        user.setPassword(request.getParameter("password"));
        user.setUsername(request.getParameter("name"));

        HomeDAO home = new HomeDAO();
        if (home.userExistOrNot(user.getEmail()))
            response.sendRedirect("UserSignUp.jsp?error=User already Exists");

        else {
            Boolean res = home.addUser(user);
            if (res == true)
                response.sendRedirect("success.html");
            else
                response.sendRedirect("UserSignUp.jsp?error=User already Exists");

        }
    }
}
