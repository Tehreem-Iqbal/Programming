<html>
    <head>
        <title>HOME</title>
        <link rel="stylesheet" href="stylehome.css">
    </head>
    <body align="center" >
    <%@ page language = "java" import = "MyPack.*,java.util.*"  %>
    <%
        RequestDispatcher rs = request.getRequestDispatcher("Log.jsp");
        if(session.getAttribute("user_type") == null) 
            rs.forward(request, response);
            //response.sendRedirect("Log.jsp");
        else if( (int)session.getAttribute("user_type") !=0)
                response.sendError(500, "You don't have access to this page...");
    %>
	<% 
        HomeDAO homeDAO = new HomeDAO();
        String email = (String)session.getAttribute("email");
        User user = homeDAO.returnProfile(email);
    %>

        <h3> Admin Profile</h3>
        <%= user.getUsername() %>
        <table >
            <%
                ArrayList<Image> images = homeDAO.showImages();
                for(Image image : images){
            %>
                <tr>
                    <td> <img src="<%= image.getPath() %>"  ></td>
                </tr>
                <tr>
                    <td> <%= image.getImageId() %> </td>
                </tr>
                <tr>
                    <td><div style="color:blue">
                        <% if(request.getParameter("error")!=null){ %>
                        <%= request.getParameter("error") %>
                        <% } %>
                    </div></td>
                </tr>
                <tr>
                    <td> <button ><a href="Remove?imageid=<%= image.getImageId() %>">Delete</a></button> </td>
                </tr>
                 
            </table>
            <%
        }
        %>
        <br>
        <button ><a href="Logout">Log out</a></button>
      
    </body>
</html>