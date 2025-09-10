FROM maven:3.8.5-jdk-8 AS build

COPY src /app/src
COPY pom.xml /app

COPY XYZ