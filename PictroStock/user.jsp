<html>
    <head>
        <title>HOME</title>
        <link rel="stylesheet" href="stylehome.css">
    </head>
<body align="canter" >

    <%@ page language = "java" import = "MyPack.*, java.util.*" %>
    <%
        RequestDispatcher rs = request.getRequestDispatcher("Log.jsp");
        if(session.getAttribute("user_type") == null) 
            rs.forward(request, response);
            //response.sendRedirect("Log.jsp");
        else if( (int)session.getAttribute("user_type") !=1)
                response.sendError(500, "You don't have access to this page...");
    %>
    <%  
        HomeDAO homeDAO = new HomeDAO();
        String email = (String)session.getAttribute("email");
        User user = homeDAO.returnProfile(email);
    %>

    <h1> User Profile </h3>
    <%= user.getUsername() %>
        
    <table border="5">
       
        <%
            ArrayList<Image> images = homeDAO.showImages();
            for(Image image : images){
        %>
            <tr>
                <td> <img src="<%= image.getPath() %>" style= "float: left; width: 30%; margin-right: 1%; margin-bottom: 0.5em;" ></td>
            </tr>
            <tr>
                <td> <button ><a href="AddToCart?imageid=<%= image.addToCart() %>">Add to cart</a></button> </td>
            </tr>
        <%
        }
        %>
        </table>
    <br><button type="button"><a href="Logout">Log out</a></button>
    </body>
</html>