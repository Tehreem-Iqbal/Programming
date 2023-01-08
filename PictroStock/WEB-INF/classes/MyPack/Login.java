package MyPack;

import javax.servlet.http.*;
import javax.servlet.*;
import java.io.*;

public class Login extends HttpServlet {
    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {
        String email = request.getParameter("email");
        String password = request.getParameter("password");
        HomeDAO homeDAO = new HomeDAO();

        int userType = homeDAO.authentication(email, password);

        if (userType == -1) {
            response.sendRedirect("Log.jsp?error=Incorrect Password");
        } else {
            HttpSession session = request.getSession(true);
            session.setAttribute("email", email);
            session.setAttribute("user_type", userType);
            if (userType == 0)
                response.sendRedirect("admin.jsp");
            else if (userType == 1)
                response.sendRedirect("user.jsp");

            else
                response.sendRedirect("contributor.jsp");
        }
    }

}
