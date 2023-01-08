<html>
    <head>
        <title>HOME</title>
        <link rel="stylesheet" href="stylehome.css">
    </head>
    <body align="center" >
    <%@ page language = "java" import = "MyPack.*, java.util.*" %>
    <%
    RequestDispatcher rs = request.getRequestDispatcher("Log.jsp");
    
        if(session.getAttribute("user_type") == null) 
            rs.forward(request, response);
            //response.sendRedirect("Log.jsp");
        else if( (int)session.getAttribute("user_type") !=2)
            response.sendError(500, "You don't have access to this page...");
        HomeDAO homeDAO = new HomeDAO();
        String email = (String)session.getAttribute("email");
        User user = homeDAO.returnProfile(email);

        %>
        <div>
        <h3> User Profile</h3>
        <%= user.getUsername() %>
        </div>
        <br>
        <br>
        <form method="POST"  action="Addimage"  enctype='multipart/form-data'>
        Select Image <input type="file" name="image">
        <br>
        <br>
        <input type="submit" value="Upload">
        </form>
        <div style="color:blue">
            <% if(request.getParameter("msg")!=null){ %>
            <%= request.getParameter("msg") %>
            <% } %>
        </div>

        <table >
       
        <%
            ArrayList<Image> images = homeDAO.showContributorImages(user);
            for(Image image : images){
        %>
            <tr>
                <td> <img src="<%= image.getPath() %>" style= "float: left; width: 30%; margin-right: 1%; margin-bottom: 0.5em;" ></td>
            </tr>
            <tr>
                <td> <%= image.getImageId() %> </td>
            </tr>
            <tr>
                <td><div style="color:red">${error}</div></td>
            </tr>
            <tr>
                <td> <button ><a href="Remove?imageid=<%= image.getImageId() %>">Delete</a></button> </td>
            </tr>
        <%
        }
        %>
        </table>
        
                
        <button type="button"><a href="Logout">Log out</a></button>
    </body>
</html>