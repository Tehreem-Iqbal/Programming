<html>
    <head>
        <title>LOGIN</title>
        <link rel="stylesheet" href="style.css">
    </head>
    <body>
        <%@ page language = "java" import = "MyPack.*" %>  
        <form method="POST" action="Login" >
            <div class="form">
                <h1>Log In</h1>
                <input type="email" name="email" placeholder="Enter Email" required>
                <input type="password" name="password" placeholder="Enter Password" required>
                <div style="color:red">
                    <% if(request.getParameter("error")!=null){ %>
                    <%= request.getParameter("error") %>
                    <% } %>
                </div>
            <input type="submit" value="Login">             
            </div>
        </form>
    </body>
</html>