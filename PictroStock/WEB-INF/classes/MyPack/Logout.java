package MyPack;

import java.io.*;
import javax.servlet.http.*;
import javax.servlet.*;

public class Logout extends HttpServlet {
    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {

        try {
            HttpSession session = request.getSession(false);
            session.invalidate();
            response.sendRedirect("Log.jsp");

        } catch (Exception e) {

        }
    }

    public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {

        try {
            HttpSession session = request.getSession(false);
            session.invalidate();
            response.sendRedirect("Log.jsp");

        } catch (Exception e) {

        }
    }
}
