FROM maven:3.8.4-jdk-8 AS build
COPY src /app/src
COPY pom.xml /app

WORKDIR /app
RUN mvn clean install

FROM eclipse-temurin:17-jre-jammy

COPY --from=build /app/target/spring-boot-2-hello-world-1.0.2-SNAPSHOT.jar /app/app.jar

CMD ["java", "-jar", "/app/app.jar"]

EXPOSE 8080