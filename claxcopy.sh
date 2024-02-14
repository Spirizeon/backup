#!/bin/sh
cp ~/.config/nvim/init.lua ~/clax.nvim/init.lua
cp ~/.local/share/nvim/site/pack/packer/start/startup.nvim/lua/startup/themes/clax.lua ~/clax.nvim/clax.lua
cd ~/clax.nvim/

echo "copy to repo done!"
git status
