# Docker Commands

## Login
`docker login https://docker.pkg.github.com -u {username} -p {github token}`

## Build
From the docker directory,
`docker build -t docker.pkg.github.com/blahs15/chess/chess:latest .`

## Push
`docker push docker.pkg.github.com/blahs15/chess/chess:latest`
