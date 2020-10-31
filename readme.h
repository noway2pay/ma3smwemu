#pragma once

#if 0

******** Program started, main window displayed.
************************************************

Type     Address  Module / Label / Exception                State   Disassembly                     H Summary
Software
10004D40 <ma3smwemu.dll.MaSound_Initialize>    Enabled mov ecx, dword ptr ds : [10112F20] 2
10004D60 <ma3smwemu.dll.MaSound_Create>        Enabled mov ecx, dword ptr ds : [10112F20] 1
10004D80 <ma3smwemu.dll.MaSound_Load>          Enabled mov ecx, dword ptr ds : [10112F20] 0
10004DC0 <ma3smwemu.dll.MaSound_Open>          Enabled mov ecx, dword ptr ds : [10112F20] 0
10004DF0 <ma3smwemu.dll.MaSound_Control>       Enabled mov ecx, dword ptr ds : [10112F20] 2
10004E20 <ma3smwemu.dll.MaSound_Standby > Enabled mov ecx, dword ptr ds : [10112F20] 0
10004E50 <ma3smwemu.dll.MaSound_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10004E80 <ma3smwemu.dll.MaSound_Start > Enabled mov ecx, dword ptr ds : [10112F20] 0
10004EB0 <ma3smwemu.dll.MaSound_Pause>         Enabled mov ecx, dword ptr ds : [10112F20] 0
10004EE0 <ma3smwemu.dll.MaSound_Restart>       Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F10 <ma3smwemu.dll.MaSound_Stop>          Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F40 <ma3smwemu.dll.MaSound_Close>         Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F70 <ma3smwemu.dll.MaSound_Unload>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FA0 <ma3smwemu.dll.MaSound_Delete>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10018D10 <ma3smwemu.dll.MaSound_DeviceControl> Enabled mov eax, dword ptr ss : [esp + 10] 0
100052D0 <ma3smwemu.dll.MaSound_End>           Enabled mov ecx, dword ptr ds : [10112F20] 0

10004FC0 <ma3smwemu.dll.Phrase_Initialize>     Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FE0 <ma3smwemu.dll.Phrase_GetInfo>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10005000 <ma3smwemu.dll.Phrase_CheckData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005030 <ma3smwemu.dll.Phrase_SetData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005060 <ma3smwemu.dll.Phrase_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005090 <ma3smwemu.dll.Phrase_Play > Enabled mov ecx, dword ptr ds : [10112F20] 0
100050C0 <ma3smwemu.dll.Phrase_Pause>          Enabled mov ecx, dword ptr ds : [10112F20] 0
100050E0 <ma3smwemu.dll.Phrase_Restart > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005100 <ma3smwemu.dll.Phrase_Stop > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005120 <ma3smwemu.dll.Phrase_RemoveData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005140 <ma3smwemu.dll.Phrase_Kill > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005160 <ma3smwemu.dll.Phrase_GetStatus > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005180 <ma3smwemu.dll.Phrase_GetPosition > Enabled mov ecx, dword ptr ds : [10112F20] 0
100051A0 <ma3smwemu.dll.Phrase_GetVolume>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051C0 <ma3smwemu.dll.Phrase_GetPanpot>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051E0 <ma3smwemu.dll.Phrase_GetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005200 <ma3smwemu.dll.Phrase_SetVolume > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005230 <ma3smwemu.dll.Phrase_SetPanpot > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005260 <ma3smwemu.dll.Phrase_SetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005290 <ma3smwemu.dll.Phrase_SetEvHandler > Enabled mov ecx, dword ptr ds : [10112F20] 0
100052B0 <ma3smwemu.dll.Phrase_Terminate>      Enabled mov ecx, dword ptr ds : [10112F20] 0

******** Direct Play executed (and zak is playing)
************************************************

Type     Address  Module / Label / Exception                State   Disassembly                     Hi Summary
Software
10004D40 <ma3smwemu.dll.MaSound_Initialize>    Enabled mov ecx, dword ptr ds : [10112F20] 2
10004D60 <ma3smwemu.dll.MaSound_Create>        Enabled mov ecx, dword ptr ds : [10112F20] 1
10004D80 <ma3smwemu.dll.MaSound_Load>          Enabled mov ecx, dword ptr ds : [10112F20] 1
10004DC0 <ma3smwemu.dll.MaSound_Open>          Enabled mov ecx, dword ptr ds : [10112F20] 1
10004DF0 <ma3smwemu.dll.MaSound_Control>       Enabled mov ecx, dword ptr ds : [10112F20] 18
10004E20 < ma3smwemu.dll.MaSound_Standby > Enabled mov ecx, dword ptr ds : [10112F20] 1
10004E50 < ma3smwemu.dll.MaSound_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10004E80 < ma3smwemu.dll.MaSound_Start > Enabled mov ecx, dword ptr ds : [10112F20] 1
10004EB0 <ma3smwemu.dll.MaSound_Pause>         Enabled mov ecx, dword ptr ds : [10112F20] 0
10004EE0 <ma3smwemu.dll.MaSound_Restart>       Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F10 <ma3smwemu.dll.MaSound_Stop>          Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F40 <ma3smwemu.dll.MaSound_Close>         Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F70 <ma3smwemu.dll.MaSound_Unload>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FA0 <ma3smwemu.dll.MaSound_Delete>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FC0 <ma3smwemu.dll.Phrase_Initialize>     Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FE0 <ma3smwemu.dll.Phrase_GetInfo>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10005000 < ma3smwemu.dll.Phrase_CheckData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005030 < ma3smwemu.dll.Phrase_SetData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005060 < ma3smwemu.dll.Phrase_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005090 < ma3smwemu.dll.Phrase_Play > Enabled mov ecx, dword ptr ds : [10112F20] 0
100050C0 <ma3smwemu.dll.Phrase_Pause>          Enabled mov ecx, dword ptr ds : [10112F20] 0
100050E0 < ma3smwemu.dll.Phrase_Restart > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005100 < ma3smwemu.dll.Phrase_Stop > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005120 < ma3smwemu.dll.Phrase_RemoveData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005140 < ma3smwemu.dll.Phrase_Kill > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005160 < ma3smwemu.dll.Phrase_GetStatus > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005180 < ma3smwemu.dll.Phrase_GetPosition > Enabled mov ecx, dword ptr ds : [10112F20] 0
100051A0 <ma3smwemu.dll.Phrase_GetVolume>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051C0 <ma3smwemu.dll.Phrase_GetPanpot>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051E0 < ma3smwemu.dll.Phrase_GetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005200 < ma3smwemu.dll.Phrase_SetVolume > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005230 < ma3smwemu.dll.Phrase_SetPanpot > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005260 < ma3smwemu.dll.Phrase_SetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005290 < ma3smwemu.dll.Phrase_SetEvHandler > Enabled mov ecx, dword ptr ds : [10112F20] 0
100052B0 <ma3smwemu.dll.Phrase_Terminate>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100052D0 <ma3smwemu.dll.MaSound_End>           Enabled mov ecx, dword ptr ds : [10112F20] 0
10018D10 <ma3smwemu.dll.MaSound_DeviceControl> Enabled mov eax, dword ptr ss : [esp + 10] 0

*************     After Voice Edit opened
************************************************

Type     Address  Module / Label / Exception                State   Disassembly                     Hi Summary
Software
10004D40 <ma3smwemu.dll.MaSound_Initialize>    Enabled mov ecx, dword ptr ds : [10112F20] 4
10004D60 <ma3smwemu.dll.MaSound_Create>        Enabled mov ecx, dword ptr ds : [10112F20] 2
10004D80 <ma3smwemu.dll.MaSound_Load>          Enabled mov ecx, dword ptr ds : [10112F20] 1
10004DC0 <ma3smwemu.dll.MaSound_Open>          Enabled mov ecx, dword ptr ds : [10112F20] 1
10004DF0 <ma3smwemu.dll.MaSound_Control>       Enabled mov ecx, dword ptr ds : [10112F20] 25
10004E20 < ma3smwemu.dll.MaSound_Standby > Enabled mov ecx, dword ptr ds : [10112F20] 1
10004E50 < ma3smwemu.dll.MaSound_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10004E80 < ma3smwemu.dll.MaSound_Start > Enabled mov ecx, dword ptr ds : [10112F20] 1
10004EB0 <ma3smwemu.dll.MaSound_Pause>         Enabled mov ecx, dword ptr ds : [10112F20] 0
10004EE0 <ma3smwemu.dll.MaSound_Restart>       Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F10 <ma3smwemu.dll.MaSound_Stop>          Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F40 <ma3smwemu.dll.MaSound_Close>         Enabled mov ecx, dword ptr ds : [10112F20] 1
10004F70 <ma3smwemu.dll.MaSound_Unload>        Enabled mov ecx, dword ptr ds : [10112F20] 1
10004FA0 <ma3smwemu.dll.MaSound_Delete>        Enabled mov ecx, dword ptr ds : [10112F20] 1
10004FC0 <ma3smwemu.dll.Phrase_Initialize>     Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FE0 <ma3smwemu.dll.Phrase_GetInfo>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10005000 < ma3smwemu.dll.Phrase_CheckData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005030 < ma3smwemu.dll.Phrase_SetData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005060 < ma3smwemu.dll.Phrase_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005090 < ma3smwemu.dll.Phrase_Play > Enabled mov ecx, dword ptr ds : [10112F20] 0
100050C0 <ma3smwemu.dll.Phrase_Pause>          Enabled mov ecx, dword ptr ds : [10112F20] 0
100050E0 < ma3smwemu.dll.Phrase_Restart > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005100 < ma3smwemu.dll.Phrase_Stop > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005120 < ma3smwemu.dll.Phrase_RemoveData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005140 < ma3smwemu.dll.Phrase_Kill > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005160 < ma3smwemu.dll.Phrase_GetStatus > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005180 < ma3smwemu.dll.Phrase_GetPosition > Enabled mov ecx, dword ptr ds : [10112F20] 0
100051A0 <ma3smwemu.dll.Phrase_GetVolume>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051C0 <ma3smwemu.dll.Phrase_GetPanpot>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051E0 < ma3smwemu.dll.Phrase_GetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005200 < ma3smwemu.dll.Phrase_SetVolume > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005230 < ma3smwemu.dll.Phrase_SetPanpot > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005260 < ma3smwemu.dll.Phrase_SetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005290 < ma3smwemu.dll.Phrase_SetEvHandler > Enabled mov ecx, dword ptr ds : [10112F20] 0
100052B0 <ma3smwemu.dll.Phrase_Terminate>      Enabled mov ecx, dword ptr ds : [10112F20] 1
100052D0 <ma3smwemu.dll.MaSound_End>           Enabled mov ecx, dword ptr ds : [10112F20] 1
10018D10 <ma3smwemu.dll.MaSound_DeviceControl> Enabled mov eax, dword ptr ss : [esp + 10] 0


Once again, Voice Edit

Type     Address  Module / Label / Exception                State   Disassembly                     Hi Summary
Software
10004D40 <ma3smwemu.dll.MaSound_Initialize>    Enabled mov ecx, dword ptr ds : [10112F20] 8
10004D60 <ma3smwemu.dll.MaSound_Create>        Enabled mov ecx, dword ptr ds : [10112F20] 4
10004D80 <ma3smwemu.dll.MaSound_Load>          Enabled mov ecx, dword ptr ds : [10112F20] 1
10004DC0 <ma3smwemu.dll.MaSound_Open>          Enabled mov ecx, dword ptr ds : [10112F20] 1
10004DF0 <ma3smwemu.dll.MaSound_Control>       Enabled mov ecx, dword ptr ds : [10112F20] 33
10004E20 < ma3smwemu.dll.MaSound_Standby > Enabled mov ecx, dword ptr ds : [10112F20] 1
10004E50 < ma3smwemu.dll.MaSound_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10004E80 < ma3smwemu.dll.MaSound_Start > Enabled mov ecx, dword ptr ds : [10112F20] 1
10004EB0 <ma3smwemu.dll.MaSound_Pause>         Enabled mov ecx, dword ptr ds : [10112F20] 0
10004EE0 <ma3smwemu.dll.MaSound_Restart>       Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F10 <ma3smwemu.dll.MaSound_Stop>          Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F40 <ma3smwemu.dll.MaSound_Close>         Enabled mov ecx, dword ptr ds : [10112F20] 1
10004F70 <ma3smwemu.dll.MaSound_Unload>        Enabled mov ecx, dword ptr ds : [10112F20] 1
10004FA0 <ma3smwemu.dll.MaSound_Delete>        Enabled mov ecx, dword ptr ds : [10112F20] 3
10004FC0 <ma3smwemu.dll.Phrase_Initialize>     Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FE0 <ma3smwemu.dll.Phrase_GetInfo>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10005000 < ma3smwemu.dll.Phrase_CheckData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005030 < ma3smwemu.dll.Phrase_SetData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005060 < ma3smwemu.dll.Phrase_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005090 < ma3smwemu.dll.Phrase_Play > Enabled mov ecx, dword ptr ds : [10112F20] 0
100050C0 <ma3smwemu.dll.Phrase_Pause>          Enabled mov ecx, dword ptr ds : [10112F20] 0
100050E0 < ma3smwemu.dll.Phrase_Restart > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005100 < ma3smwemu.dll.Phrase_Stop > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005120 < ma3smwemu.dll.Phrase_RemoveData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005140 < ma3smwemu.dll.Phrase_Kill > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005160 < ma3smwemu.dll.Phrase_GetStatus > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005180 < ma3smwemu.dll.Phrase_GetPosition > Enabled mov ecx, dword ptr ds : [10112F20] 0
100051A0 <ma3smwemu.dll.Phrase_GetVolume>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051C0 <ma3smwemu.dll.Phrase_GetPanpot>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051E0 < ma3smwemu.dll.Phrase_GetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005200 < ma3smwemu.dll.Phrase_SetVolume > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005230 < ma3smwemu.dll.Phrase_SetPanpot > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005260 < ma3smwemu.dll.Phrase_SetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005290 < ma3smwemu.dll.Phrase_SetEvHandler > Enabled mov ecx, dword ptr ds : [10112F20] 0
100052B0 <ma3smwemu.dll.Phrase_Terminate>      Enabled mov ecx, dword ptr ds : [10112F20] 3
100052D0 <ma3smwemu.dll.MaSound_End>           Enabled mov ecx, dword ptr ds : [10112F20] 3
10018D10 <ma3smwemu.dll.MaSound_DeviceControl> Enabled mov eax, dword ptr ss : [esp + 10] 0


After C2 key pressed 

Type     Address  Module / Label / Exception                State   Disassembly                     Hi Summary
Software
10004D40 <ma3smwemu.dll.MaSound_Initialize>    Enabled mov ecx, dword ptr ds : [10112F20] 8
10004D60 <ma3smwemu.dll.MaSound_Create>        Enabled mov ecx, dword ptr ds : [10112F20] 4
10004D80 <ma3smwemu.dll.MaSound_Load>          Enabled mov ecx, dword ptr ds : [10112F20] 2
10004DC0 <ma3smwemu.dll.MaSound_Open>          Enabled mov ecx, dword ptr ds : [10112F20] 2
10004DF0 <ma3smwemu.dll.MaSound_Control>       Enabled mov ecx, dword ptr ds : [10112F20] 40
10004E20 < ma3smwemu.dll.MaSound_Standby > Enabled mov ecx, dword ptr ds : [10112F20] 2
10004E50 < ma3smwemu.dll.MaSound_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10004E80 < ma3smwemu.dll.MaSound_Start > Enabled mov ecx, dword ptr ds : [10112F20] 2
10004EB0 <ma3smwemu.dll.MaSound_Pause>         Enabled mov ecx, dword ptr ds : [10112F20] 0
10004EE0 <ma3smwemu.dll.MaSound_Restart>       Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F10 <ma3smwemu.dll.MaSound_Stop>          Enabled mov ecx, dword ptr ds : [10112F20] 0
10004F40 <ma3smwemu.dll.MaSound_Close>         Enabled mov ecx, dword ptr ds : [10112F20] 1
10004F70 <ma3smwemu.dll.MaSound_Unload>        Enabled mov ecx, dword ptr ds : [10112F20] 1
10004FA0 <ma3smwemu.dll.MaSound_Delete>        Enabled mov ecx, dword ptr ds : [10112F20] 3
10004FC0 <ma3smwemu.dll.Phrase_Initialize>     Enabled mov ecx, dword ptr ds : [10112F20] 0
10004FE0 <ma3smwemu.dll.Phrase_GetInfo>        Enabled mov ecx, dword ptr ds : [10112F20] 0
10005000 < ma3smwemu.dll.Phrase_CheckData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005030 < ma3smwemu.dll.Phrase_SetData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005060 < ma3smwemu.dll.Phrase_Seek > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005090 < ma3smwemu.dll.Phrase_Play > Enabled mov ecx, dword ptr ds : [10112F20] 0
100050C0 <ma3smwemu.dll.Phrase_Pause>          Enabled mov ecx, dword ptr ds : [10112F20] 0
100050E0 < ma3smwemu.dll.Phrase_Restart > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005100 < ma3smwemu.dll.Phrase_Stop > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005120 < ma3smwemu.dll.Phrase_RemoveData > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005140 < ma3smwemu.dll.Phrase_Kill > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005160 < ma3smwemu.dll.Phrase_GetStatus > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005180 < ma3smwemu.dll.Phrase_GetPosition > Enabled mov ecx, dword ptr ds : [10112F20] 0
100051A0 <ma3smwemu.dll.Phrase_GetVolume>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051C0 <ma3smwemu.dll.Phrase_GetPanpot>      Enabled mov ecx, dword ptr ds : [10112F20] 0
100051E0 < ma3smwemu.dll.Phrase_GetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005200 < ma3smwemu.dll.Phrase_SetVolume > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005230 < ma3smwemu.dll.Phrase_SetPanpot > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005260 < ma3smwemu.dll.Phrase_SetLink > Enabled mov ecx, dword ptr ds : [10112F20] 0
10005290 < ma3smwemu.dll.Phrase_SetEvHandler > Enabled mov ecx, dword ptr ds : [10112F20] 0
100052B0 <ma3smwemu.dll.Phrase_Terminate>      Enabled mov ecx, dword ptr ds : [10112F20] 3
100052D0 <ma3smwemu.dll.MaSound_End>           Enabled mov ecx, dword ptr ds : [10112F20] 3
10018D10 <ma3smwemu.dll.MaSound_DeviceControl> Enabled mov eax, dword ptr ss : [esp + 10] 0

Same as above, but only these functions that were ever called
10004D40 <ma3smwemu.dll.MaSound_Initialize>    Enabled mov ecx, dword ptr ds : [10112F20] 8
10004D60 <ma3smwemu.dll.MaSound_Create>        Enabled mov ecx, dword ptr ds : [10112F20] 4
10004D80 <ma3smwemu.dll.MaSound_Load>          Enabled mov ecx, dword ptr ds : [10112F20] 2
10004DC0 <ma3smwemu.dll.MaSound_Open>          Enabled mov ecx, dword ptr ds : [10112F20] 2
10004DF0 <ma3smwemu.dll.MaSound_Control>       Enabled mov ecx, dword ptr ds : [10112F20] 40
10004E20 < ma3smwemu.dll.MaSound_Standby >     Enabled mov ecx, dword ptr ds : [10112F20] 2
10004E80 < ma3smwemu.dll.MaSound_Start >       Enabled mov ecx, dword ptr ds : [10112F20] 2
10004F40 <ma3smwemu.dll.MaSound_Close>         Enabled mov ecx, dword ptr ds : [10112F20] 1
10004F70 <ma3smwemu.dll.MaSound_Unload>        Enabled mov ecx, dword ptr ds : [10112F20] 1
10004FA0 <ma3smwemu.dll.MaSound_Delete>        Enabled mov ecx, dword ptr ds : [10112F20] 3
100052B0 <ma3smwemu.dll.Phrase_Terminate>      Enabled mov ecx, dword ptr ds : [10112F20] 3
100052D0 <ma3smwemu.dll.MaSound_End>           Enabled mov ecx, dword ptr ds : [10112F20] 3

#endif