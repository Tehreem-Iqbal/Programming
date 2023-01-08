<html>
    <head>
        <title>SIGN UP Contributor</title>
        <link rel="stylesheet" href="style.css">
    </head>
    <body>
        <form method="POST" action="InsertContributor">
            <div class="form">
                <h1>SIGN UP</h1>
            <input type="email" name="email"  placeholder="EMAIL" required>
            <input type="text" name="name" placeholder="NAME" required>
            <input type="password" name="password" placeholder="Password" required>
            <div style="color:red">
                <% if(request.getParameter("error")!=null){ %>
                <%= request.getParameter("error") %>
                <% } %>
            </div>
            <input type="submit" value="SignUp">
        </div>
        </form>
     
        
    </body>
</html>