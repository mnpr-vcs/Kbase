- API-Server Architecture
  collapsed:: true
	- APIServer
	  collapsed:: true
		- Client: User management
		- Jobs: Service management
			- GCP Services
		- Local Cloud: Local Cloud Computing
		- Monitoring
		- Support
	- Serverless
	  collapsed:: true
		- AWS Services
			- Simple Message Queue Service
			- Simple Storage Service
			- Lambda Compute Service
	- Client
- Stacks and Practices
  collapsed:: true
	- Development Stack
		- Core Stack
			- [Django](https://www.djangoproject.com/)
			- [Django REST](https://www.django-rest-framework.org/)
			- [Celery](https://docs.celeryq.dev/en/stable/index.html)
			- [PyTest](https://docs.pytest.org/)
			- [Redis](https://redis.io/)
			- [Vagrant](https://www.vagrantup.com/)
			- [StructLog](https://www.structlog.org/en/stable/index.html)
			- Google Libs (api-core, auth, compute, & storage)
			- [AWS Cloud SDK ( Boto3)](https://boto3.amazonaws.com/v1/documentation/api/latest/index.html)
		- Version Control
			- [Pre-Commit](https://pre-commit.com/)
			- [Git](https://git-scm.com/doc)
			  collapsed:: true
				- Workflows
				- Merge & Rebase
				- Mailmap
		- API Documentation
			- [OpenAPI Specification {Swagger}](https://swagger.io/specification/)
		- Automation & Scripting
			- [Ansible](https://docs.ansible.com/ansible/latest/index.html)
			- [Bash](https://www.gnu.org/software/bash/manual/bash.pdf)
	- Practices
	  collapsed:: true
		- Python Environment
		  collapsed:: true
			- Conda Development Env
			  collapsed:: true
				- Template : `environment.yml`
				  collapsed:: true
					- ```yaml
					  name: api_server
					  channels:
					    - conda-forge
					    - default
					  dependencies:
					      - celery
					      - django
					      - djangorestframework
					      - drf-spectacular
					      - google-api-core
					      - google-auth
					      - google-cloud-storage
					      - google-cloud-compute=1.4
					      - ipython
					      - pip
					      - pre-commit
					      - psycopg2
					      - pytest
					      - pytest-django
					      - pytest-mock
					      - python=3.8
					      - pyyaml
					      - redis-py
					      - rest_condition
					      - shortuuid
					      - structlog
					      - uwsgi
					      - pip:
					          - django-rest-knox
					          - boto3
					  ```
		- Lint, Format, Check before Commit
		  collapsed:: true
			- Pre-commit `.pre-commit-config.yaml`
			  collapsed:: true
				- ```yaml
				  repos:
				      - hooks:
				        - id: check-added-large-files
				        - id: check-json
				        - id: check-yaml
				          args: [--allow-multiple-documents]
				        - id: mixed-line-ending
				        - id: trailing-whitespace
				        repo: https://github.com/pre-commit/pre-commit-hooks
				        rev: v3.2.0
				      - repo: https://github.com/pycqa/isort
				        rev: 5.12.0
				        hooks:
				        - id: isort
				          name: isort (python)
				      - hooks:
				        - id: flake8
				        repo: https://github.com/pycqa/flake8
				        rev: 6.0.0
				      - hooks:
				        - id: black
				          additional_dependencies: ['click==8.0.4']
				        repo: https://github.com/ambv/black
				        rev: 20.8b1
				  ```
			- Coexistence `setup.cfg`
			  collapsed:: true
				- ```cfg
				  [flake8]
				  max-line-length=120
				  [isort]
				  profile = black
				  [black]
				  line-length=120
				  ```
		- Version Control
		  collapsed:: true
			- Git
				- Mailmap : `.mailmap`
					- ```
					  Sudesh Acharya <acharya.sudesh366@gmail.com> <acharya.sudesh366@gmail.com>
					  Sudesh Acharya <acharya.sudesh366@gmail.com> <mnpr_term@pop-os.localdomain>
					  ```