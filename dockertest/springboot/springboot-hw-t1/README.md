# Spring Boot Hello World

**A simple Spring Boot 2.x app to send hello world message to a user**

## Dockerizing a Spring Boot Application
This tutorial will guide you through the steps to dockerize a Spring Boot application, including creating a Dockerfile, building the Docker

Step 1: Build the Application<br/>
- 1.1 Package the Application<br/>
- **Maven** <br/>
  ```mvn -DskipTests=true clean package```

Step 2: Build the Docker Image<br/>
- 2.1 Build the Image<br/>
```docker build -t spring-hello-world-docker .```

Step 3: Run the Docker Container<br/>
- 3.1 Run the Container<br/>
```docker run -p 8080:8080 spring-hello-world-docker```

Step 4: Test the Application<br/>
- 4.1 Access the Application<br/>
  Open your browser and navigate to ```http://localhost:8080/hello```. You should see the following response:

## How to Run Application

**Start the application using any of the commands mentioned below**

> **Note:** First two commands need to run inside the root folder of this project i.e inside the **spring-boot-hello-world** folder

- **Using maven** <br/>``` mvn spring-boot:run```


- **From jar file**
  Create a jar file using '**mvn clean install**' command and then execute
  <br/>```java -jar target/spring-boot-2-hello-world-1.0.2-SNAPSHOT.jar```


- **Directly from IDE**
  <br/>```Right click on HelloWorldApplication.java and click on 'Run' option```
  <br/>```Set Bind Port: 8080:8080```<br/>

> **Note:** By default spring boot application starts on port number 8080. If port 8080 is occupied in your system then you can change the port number by uncommenting and updating the **server.port** property inside the **application.properties** file that is available inside the **src > main > resources** folder.

<br/>

**Send an HTTP GET request to '/hello' endpoint using any of the two methods**

- **Browser or REST client**
  <br/>```http://localhost:8080/hello```


- **cURL**
  <br/>```curl --request GET 'http://localhost:8080/hello'```


## How to Run Unit Test Cases

**Run the test cases using any of the commands mentioned below**

> **Note:** These commands need to run inside the root folder of this project i.e inside the **spring-boot-hello-world** folder

- **To run all the test cases**
  <br/>```mvn test```


- **To run a particular test class**
  <br/>```mvn -Dtest=HelloWorldControllerTest test```
  <br/>or
  <br/>```mvn -Dtest=HelloWorldApplicationTests test```