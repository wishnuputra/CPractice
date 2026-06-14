## 1. Creating VM Template

After cloning a VM using template. If we are unable to connect remotely the VM using SSH. Please check folder `/etc/ssh/`. If there is no ssh_host_key, we need to generate them.<br>
```
sudo ssh_keygen -A
```
This will generate new ssh key for that specific VM. Then restart the ssh server.
```
sudo systemctl restart ssh
```

### Troubleshooting

When connecting to VM using ssh. If change the ip address of our VM, we might need to remove the recorded ssh key.<br>
```
ssh-keygen -f ~/.ssh/known_hosts -R "192.168.1.101"
```

