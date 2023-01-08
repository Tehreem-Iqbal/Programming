package MyPack;

import java.io.*;
import javax.servlet.http.*;
import javax.servlet.*;

public class Remove extends HttpServlet {
    public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {
        try {
            HttpSession session = request.getSession(false);
            if (session == null || (int) session.getAttribute("user_type") == 1)
                response.sendRedirect("Log.jsp?error=Error");
            else {
                HomeDAO homeDAO = new HomeDAO();
                String imageid = request.getParameter("imageid");
                if (homeDAO.deleteImage(imageid)) {
                    if ((int) session.getAttribute("user_type") == 0)
                        response.sendRedirect("admin.jsp");
                    else
                        response.sendRedirect("contributor.jsp");
                } else
                    response.sendRedirect("admin.jsp?error=Error");
            }
        } catch (Exception e) {

        }
    }
}
