-- # Booting gay ass library

if game.PlaceId == 13190091082 then
    local Rayfield = loadstring(game:HttpGet('https://sirius.menu/rayfield'))()
    local Player = game.Players.LocalPlayer
    local Window = Rayfield:CreateWindow({
        Name = "lithium.cc | Wisteria 2",
        LoadingTitle = "lithium.cc",
        LoadingSubtitle = "by covertsu and angel",
        ConfigurationSaving = {
           Enabled = false,
           FolderName = nil, -- Create a custom folder for your hub/game
           FileName = "Big Hub"
        },
        Discord = {
           Enabled = false,
           Invite = "noinvitelink", -- The Discord invite code, do not include discord.gg/. E.g. discord.gg/ABCD would be ABCD
           RememberJoins = true -- Set this to false to make them join the discord every time they load it up
        },
        KeySystem = false, -- Set this to true to use our key system
        KeySettings = {
           Title = "Untitled",
           Subtitle = "Key System",
           Note = "No method of obtaining the key is provided",
           FileName = "Key", -- It is recommended to use something unique as other scripts using Rayfield may overwrite your key file
           SaveKey = true, -- The user's key will be saved, but if you change the key, they will be unable to use your script
           GrabKeyFromSite = false, -- If this is true, set Key below to the RAW site you would like Rayfield to get the key from
           Key = {"Hello"} -- List of keys that will be accepted by the system, can be RAW file links (pastebin, github etc) or simple strings ("hello","key22")
        }
    })
    
    local Tab1 = Window:CreateTab("Home")
    local Section1 = Tab1:CreateSection("Product Information")
    local Label1 = Tab1:CreateLabel("Welcome, "..Player.Name..".")
    local Label2 = Tab1:CreateLabel("Version: 1.0")
    local Label2 = Tab1:CreateLabel("Game: Wisteria 2")
    local Paragraph1 = Tab1:CreateParagraph({Title = "Update Logs", Content = "wow so many updates!!!11"})
    local Section2 = Tab1:CreateSection("Misc")
    local Button1 = Tab1:CreateButton({
        Name = "Copy Discord Server Link",
        Callback = function()
            setclipboard('i love men')
        end,
    })
    local Button2 = Tab1:CreateButton({
        Name = "Destroy UI",
        Callback = function()
            Rayfield:Destroy()
        end,
    })


    local Tab2 = Window:CreateTab("Main")
    local Section3 = Tab2:CreateSection("Basic")
    local Slider1 = Tab2:CreateSlider({
        Name = "Field Of View",
        Range = {60, 120},
        Increment = 1,
        Suffix = "fov",
        CurrentValue = 70,
        Flag = "FOV",
        Callback = function(Value)
            game:GetService'Workspace'.Camera.FieldOfView = Value
        end,
    })

    local Slider2 = Tab2:CreateSlider({
        Name = "Time",
        Range = {0, 24},
        Increment = 1,
        Suffix = "time",
        CurrentValue = 12,
        Flag = "Time",
        Callback = function(Value)
            game.Lighting.TimeOfDay = Value
        end,
    })

    local Button3 = Tab2:CreateButton({
        Name = "Fullbright",
        Callback = function()
           
        end,
    })

    

    local Button4 = Tab2:CreateButton({
        Name = "Rejoin Server",
        Callback = function()
            local ts = game:GetService("TeleportService")
            local p = game:GetService("Players").LocalPlayer
            ts:TeleportToPlaceInstance(game.PlaceId, game.JobId, p)
        end,
    })

    local Button5 = Tab2:CreateButton({
        Name = "Server hop",
        Callback = function()
            local ts = game:GetService("TeleportService")
            local p = game:GetService("Players").LocalPlayer
            ts:Teleport(game.PlaceId, p)
        end,
    })

    local Section4 = Tab2:CreateSection("Advanced")
    local Toggle1 = Tab2:CreateToggle({
        Name = "Farm EXP/Yen",
        CurrentValue = false,
        Flag = "Toggle1", 
        Callback = function(state)
            if state then
            getgenv().farm = true

            while farm do task.wait()
            game:GetService("ReplicatedStorage").Events.Dialogue:FireServer({
            ["Type"] = "End",
            ["Npc"] = workspace.Npcs.Mita,
            ["Path"] = "Accept"
            })
            game:GetService("ReplicatedStorage").Events.Dialogue:FireServer({
            ["Type"] = "End",
            ["Npc"] = workspace.Npcs:FindFirstChild("Saru Kenshi"),
            ["Path"] = "SetSpawn"
            })
            end
        else
            getgenv().farm = false
        end
        end,
     })
    
    
    local Button6 = Tab2:CreateButton({
        Name = "God Mode",
        Callback = function()
            game:GetService("Players").LocalPlayer.Character.Effects.Attackers:Destroy()
        end,
    })

    local Button7 = Tab2:CreateButton({
        Name = "No Sunburn",
        Callback = function()
            game:GetService("ReplicatedStorage").Events.SunlightBurn:Destroy()
        end,
    })

end
