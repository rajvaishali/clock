console.log("hey,gudda"); 
const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  //res.end('Hello World this is rohan das');
  res.end(`<!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Document</title>
  </head>
  <style>
  .container{
      width: 68%;
      height: 506px;
      background-color: #8c828254;
      border: 2px solid red;
  
  
  }
  h3{
      font-size: 22px;
      margin: 0px 0px;
  }
  #green{
      border: 2px solid black;
      background-color: green;
      color: white;
      padding: 20px;
  }
  .unique{
      margin: 0px 0px;
      
  }
  </style>
  <body>
      <form action="" class="container">
       <section id="green">
           <h3>Contact Form</h3>
      <div>
          please fill all the information:
      </div>
       </section>
       <div class="unique">
       <div>
           <label for="name">your name:</label>
       </div>
       <div>
           <input type="text" id="name">
       </div>
       <div>
          <label for="email" >your Email:</label>
      </div>
      <div>
          <input type="text" id="email">
      </div>
      
       <div>
          <label for="message" >messages:</label>
      </div>
      <div>
          <input type="text" id="message">
      </div>
      
       <div>
          <label for="subject" >subject:</label>
      </div>
      <div>
          <input type="text" id="subject">
      </div>
      <div>
          message:
      </div>
     <div>
         <textarea name="" id="" cols="30" rows="10"></textarea>
     </div>
  </div>
  
      </form>
  </body>
  </html>`);

});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});