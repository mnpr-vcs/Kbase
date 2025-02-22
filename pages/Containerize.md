- Docker
  collapsed:: true
	- Platform Setup `Docker Engine`
	  title:: Containerize
		- Uninstall old version
		  collapsed:: true
			- `sudo apt-get remove docker docker-engine docker.io containerd runc`
		- Install [*pkg. mgr. : aptitude*]
		  collapsed:: true
			- Docker Setup Script `docker_setup.sh` : `chmod +x docker_setup.sh && bash docker_setup.sh`
			  id:: 6465bda5-43da-470f-8497-0a6b0756ecbd
			  collapsed:: true
				- ```shell
				  #!/usr/bin/env/ bash
				  
				  echo ">>> Docker Setup .."
				  
				  # install pkg thru apt over HTTPS repos
				  sudo apt-get update
				  sudo apt-get install ca-certificates curl gnupg
				  
				  # add docker's gpg key
				  sudo install -m 0755 -d /etc/apt/keyrings
				  curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg
				  sudo chmod a+r /etc/apt/keyrings/docker.gpg
				  
				  # setup apt repos
				  echo \
				    "deb [arch="$(dpkg --print-architecture)" signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/ubuntu \
				    "$(. /etc/os-release && echo "$VERSION_CODENAME")" stable" | \
				    sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
				  
				  # update the pkg index
				  sudo apt-get update
				  
				  # install docker eco-sys
				  sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
				  
				  # eof
				  echo -e "\n Test Installation :
				  \t- docker run hello-world
				  \t- #check post-installation
				  "
				  ```
			- [Manual Installation Instructions](https://docs.docker.com/engine/install/ubuntu/)
			- Post Installation
				- Create the `docker` group. and add self.USER
					- `sudo groupadd docker && sudo usermod -aG docker $USER`
				- enable/disable on boot by default (`systemd`)
					- ```shell
					  systemctl enable docker.service
					  systemctl enable containerd.service
					  ```
					- ```shell
					  systemctl enable docker.service
					  systemctl enable containerd.service
					  ```
		- Uninstall
		  collapsed:: true
			- ```shell
			  sudo apt-get purge docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin \
			  docker-ce-rootless-extras
			  ```
			- ```shell
			  sudo rm -rf /var/lib/docker
			  sudo rm -rf /var/lib/containerd
			  ```
	- [Docs @](https://docs.docker.com/)
- K8s