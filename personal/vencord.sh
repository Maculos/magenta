#!/bin/bash
wget  -O /tmp/discord.deb "https://discord.com/api/download?platform=linux&format=deb"; #grab latest discord deb and throw in temp
pkill -f "discord"; #kill any active discord clients
sudo dpkg -i /tmp/discord.deb; #install updated discord
rm /tmp/discord.deb; #clean up work
screen -dm discord; #silently run discord, needed before installing vencord
pkill -f "discord"; #lazy way of killing that hidden discord
sh -c "$(curl -sS https://raw.githubusercontent.com/Vendicated/VencordInstaller/main/install.sh)" #vencord installer
