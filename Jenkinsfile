pipeline {
    agent { label 'node1' }
    environment {
        APP = 'ABC'
    }
    parameters {
        choice(name: 'ENV', choices: ['qa','uat','prod'], description: 'WHERE TO DEPLOY')
    }
    stagess {
        stage('BUILD') {
            steps {
                sh 'make'
            }
        }
        stage('TEST') {
            steps {
                sh 'echo tests ok'
            }
        }
        stage('PROD-CHECK') {
            when {
                expression { params.ENV == 'prod' }
            }
            steps {
                sh 'echo running extra checks for prod'
            }
        }
        stage('deploy') {
            steps {
                sh 'ls -l ABC.exe'
                sh "echo deploying $APP to ${params.ENV}"
                sh ' echo finished '
            }
        }
    }
    post {
        success {
            echo 'Build passed'
        }
        failure {
            echo 'Build failed, check the console'
        }
        always {
            echo 'this runs no matter what'
        }
    }
}
