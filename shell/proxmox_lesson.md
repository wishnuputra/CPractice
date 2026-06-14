## 1. Creating VM Template

After cloning a VM using template. If we are unable to connect remotely the VM using SSH. Please check folder `/etc/ssh/`. If there is no ssh_host_key, we need to generate them.<br>
```
sudo ssh-keygen -A
```
This will generate new ssh key for that specific VM. Then restart the ssh server.
```
sudo systemctl restart ssh
```

## Troubleshooting

### 1. SSH connection issue

When connecting to VM using ssh. If change the ip address of our VM, we might need to remove the recorded ssh key.<br>
```
ssh-keygen -f ~/.ssh/known_hosts -R "192.168.1.101"
```

### 2. Cloud-init failed to set Static IP address

Make sure that cloud-init is added to the boot order of your VM.<br>

<img width="512" height="26" alt="image" src="https://github.com/user-attachments/assets/3544eb25-df26-42e1-ac62-b4a4d1587bf2" />

<img width="639" height="261" alt="image" src="https://github.com/user-attachments/assets/38a3d8fc-b724-49d3-ab9e-24429fad05d6" />

### 3. Failed to activate SSH

<img width="828" height="376" alt="image" src="https://github.com/user-attachments/assets/b8601a82-5585-44ca-a454-3b538b086d61" />

To overcome the above errors, we need to regenerate new ssh key.<br>
Please check folder `/etc/ssh/`. If there is no ssh_host_key, we need to generate them.<br>
```
sudo ssh-keygen -A
```
This will generate new ssh key for that specific VM. Then restart the ssh server.
```
sudo systemctl restart ssh
```

### 4. Set static IP address

Open the yaml file inside folder `/etc/netplan`.<br>
```
ls -l /etc/netplan/50-cloud-init.yaml
```
First backup this file. Then set the new static ip address there.<br>
```
network:
  version: 2
  ethernets:
    ens18:
      addresses:
        - 192.168.1.110/24
      routes:
        - to: default
          via: 192.168.1.1
      nameservers:
        addresses: [192.168.1.1]
```

