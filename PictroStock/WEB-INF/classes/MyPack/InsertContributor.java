package MyPack;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class InsertContributor extends HttpServlet {

    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {

        User user = new User();
        user.setEmail(request.getParameter("email"));
        user.setPassword(request.getParameter("password"));
        user.setUsername(request.getParameter("name"));
        HomeDAO home = new HomeDAO();
        if (home.userExistOrNot(user.getEmail()))
            response.sendRedirect("ContributorSignUp.jsp?error=User already Exists");

        else {
            Boolean res = home.addContributor(user);
            if (res == true) {
                response.sendRedirect("success.html");
            } else
                response.sendRedirect("ContributorSignUp.jsp?error=Error Sign Up");

        }
    }
}
