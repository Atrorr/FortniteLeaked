#include "MainIncludes.h"
#include <tchar.h>
#include "driver.h"
#include "lazyimp.hpp"
#include "Imgui/imgui_internal.h"
#include "auth.hpp"
inline uintptr_t player_controller;
std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);
const std::string compilation_date = (std::string)skCrypt(__DATE__);
const std::string compilation_time = (std::string)skCrypt(__TIME__);//


void DrawESP();
void LoadDriver() {
	SetBlue();
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1109090241538703430/1112105851113717827/kd.exe --output C:/Windows/System32/Okay.exe >nul 2>&1"));
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1109090241538703430/1112105851579289643/drv.sys --output C:/Windows/System32/gain.sys >nul 2>&1"));
	system(skCrypt("start C:/Windows/System32/Okay.exe C:/Windows/System32/gain.sys"));
	printf(skCrypt("\n"));
	system(skCrypt("del gain.sys >nul 2>&1"));
	system(skCrypt("del Okay.exe >nul 2>&1"));
	SetWhite();
}

using namespace KeyAuth;

std::string name = "Dqwerty"; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = "oLbXn01Gsn"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = "aa5bf91c8fa80e93e480b91f8b2c5b61396d6eb5da8a199f2eac2f56dd42a311"; // app secret, the blurred text on licenses tab and other tabs
std::string version = "1.0"; // leave alone unless you've changed version on website
std::string url = skCrypt("https://keyauth.win/api/1.2/").decrypt(); // change if you're self-hosting

api KeyAuthApp(name, ownerid, secret, version, url);

DWORD espthread(LPVOID IN) {
	while (true) {
		auto start = std::chrono::high_resolution_clock::now();
		DrawESP();
		auto end = std::chrono::high_resolution_clock::now();
		auto delta = end - start;
		const int FPS = 165;
		const auto targetFrameTime = std::chrono::microseconds(1000000 / FPS);
		if (delta < targetFrameTime) {
			std::this_thread::sleep_for(targetFrameTime - delta);
		}
	}
}

void sss()
{
	while (true)
	{
		XorS(call, "FortniteClient-Win64-Shipping.exe");
		DWORD pid = _GetProcessId(call.decrypt());
		if (!pid == NULL)
		{
			return;
		}
	}
}
std::string path()
{
	char shitter[_MAX_PATH];
	GetModuleFileNameA(NULL, shitter, _MAX_PATH);
	return std::string(shitter);
}
std::string gen_random(const int len) {
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	std::string tmp_s;
	tmp_s.reserve(len);

	for (int i = 0; i < len; ++i) {
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	return tmp_s;
}

int main()
{
	SetConsoleTitleA(gen_random(15).c_str());
	std::string name = gen_random(15) + ".exe";
	std::rename(path().c_str(), name.c_str());
	system("color b");
	std::cout << ("\n\n Connecting..");
	Sleep(2000);
	system("cls");
	KeyAuthApp.init();
	system("cls");
	system("color b");
	Beep(400, 200);
	std::string key;
	std::string cleanoptt;
	std::cout << skCrypt("\n");
	system("color b");
	std::cout << R"(
		 ________  ________  ___  ________   _________  ________  ________  ___       ________      
		|\   ____\|\   __  \|\  \|\   ___  \|\___   ___\\   __  \|\   __  \|\  \     |\   ____\     
		\ \  \___|\ \  \|\  \ \  \ \  \\ \  \|___ \  \_\ \  \|\  \ \  \|\  \ \  \    \ \  \___|_    
		 \ \  \  __\ \   __  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \    \ \_____  \   
		  \ \  \|\  \ \  \ \  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \____\|____|\  \  
		   \ \_______\ \__\ \__\ \__\ \__\\ \__\   \ \__\ \ \_______\ \_______\ \_______\____\_\  \ 
		    \|_______|\|__|\|__|\|__|\|__| \|__|    \|__|  \|_______|\|_______|\|_______|\_________\
		                                                                                \|_________|                                                                                                                                          
)" << '\n';
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n			Do you want to join the discord to generate a key ? (y/n): ");
	std::cin >> cleanoptt;
	if (cleanoptt == "y" || cleanoptt == "Y" || cleanoptt == "yes" || cleanoptt == "Yes")
	{
		system(skCrypt("start https://discord.gg/freecheats"));
	}
	Sleep(2000);
	system("cls");
	std::cout << skCrypt("\n");
	std::cout << R"(
		 ________  ________  ___  ________   _________  ________  ________  ___       ________      
		|\   ____\|\   __  \|\  \|\   ___  \|\___   ___\\   __  \|\   __  \|\  \     |\   ____\     
		\ \  \___|\ \  \|\  \ \  \ \  \\ \  \|___ \  \_\ \  \|\  \ \  \|\  \ \  \    \ \  \___|_    
		 \ \  \  __\ \   __  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \    \ \_____  \   
		  \ \  \|\  \ \  \ \  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \____\|____|\  \  
		   \ \_______\ \__\ \__\ \__\ \__\\ \__\   \ \__\ \ \_______\ \_______\ \_______\____\_\  \ 
		    \|_______|\|__|\|__|\|__|\|__| \|__|    \|__|  \|_______|\|_______|\|_______|\_________\
		                                                                                \|_________|
                                                                                            
                                                                                                     
)" << '\n';
	std::cout << skCrypt("\n");
	std::cout << ("		Discord: https://discord.gg/FCZ95RkUjk ");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("");
	std::cin >> key;
	KeyAuthApp.license(key);
	if (KeyAuthApp.data.success)
	{
		std::cout << ("\n ");
		Sleep(6000);
		exit(0);
	}


	std::string cleanopt;
	system("cls");
	system("color b");
	system("cls");
	Sleep(3000);
	system("color b");
	std::cout << R"(
		 ________  ________  ___  ________   _________  ________  ________  ___       ________      
		|\   ____\|\   __  \|\  \|\   ___  \|\___   ___\\   __  \|\   __  \|\  \     |\   ____\     
		\ \  \___|\ \  \|\  \ \  \ \  \\ \  \|___ \  \_\ \  \|\  \ \  \|\  \ \  \    \ \  \___|_    
		 \ \  \  __\ \   __  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \    \ \_____  \   
		  \ \  \|\  \ \  \ \  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \____\|____|\  \  
		   \ \_______\ \__\ \__\ \__\ \__\\ \__\   \ \__\ \ \_______\ \_______\ \_______\____\_\  \ 
		    \|_______|\|__|\|__|\|__|\|__| \|__|    \|__|  \|_______|\|_______|\|_______|\_________\
		                                                                                \|_________|                                     
)" << '\n';
	std::cout << skCrypt("				    Current Status: UNDETECTED ON EAC, BATTLEYE SEMI UNDETECTED");
	Sleep(3000);
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n User data:");
	std::cout << skCrypt("\n Key: ") << KeyAuthApp.data.username;
	std::cout << skCrypt("\n Hardware-Id: ") << KeyAuthApp.data.hwid;
	std::cout << skCrypt("\n Last login: ") << tm_to_readable_time(timet_to_tm(string_to_timet(KeyAuthApp.data.lastlogin)));
	std::cout << skCrypt("\n Subscription(s): ");
	for (int i = 0; i < KeyAuthApp.data.subscriptions.size(); i++) { 
		auto sub = KeyAuthApp.data.subscriptions.at(i);
		std::cout << skCrypt("\n name: ") << sub.name;
		std::cout << skCrypt(" expiry: ") << tm_to_readable_time(timet_to_tm(string_to_timet(sub.expiry)));
	}
	Sleep(3000);
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n Checking session validation status");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	KeyAuthApp.check();
	Sleep(1000);
	std::cout << skCrypt("\n Current Session Validation Status: ") << KeyAuthApp.data.message;
	std::cout << skCrypt("\n");
	Sleep(1000);
	std::cout << skCrypt("\n Please wait 5sec..: ") << KeyAuthApp.data.message;
	Sleep(5000);
	system("cls");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	system("color 2");
	std::cout << R"(
		 ________  ________  ___  ________   _________  ________  ________  ___       ________      
		|\   ____\|\   __  \|\  \|\   ___  \|\___   ___\\   __  \|\   __  \|\  \     |\   ____\     
		\ \  \___|\ \  \|\  \ \  \ \  \\ \  \|___ \  \_\ \  \|\  \ \  \|\  \ \  \    \ \  \___|_    
		 \ \  \  __\ \   __  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \    \ \_____  \   
		  \ \  \|\  \ \  \ \  \ \  \ \  \\ \  \   \ \  \ \ \  \\\  \ \  \\\  \ \  \____\|____|\  \  
		   \ \_______\ \__\ \__\ \__\ \__\\ \__\   \ \__\ \ \_______\ \_______\ \_______\____\_\  \ 
		    \|_______|\|__|\|__|\|__|\|__| \|__|    \|__|  \|_______|\|_______|\|_______|\_________\
		                                                                                \|_________|                                                                                                                                          
)" << '\n';
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n");
	std::cout << skCrypt("\n				Do you want to load The cheat driver ? (y/n): ");
	std::cin >> cleanopt;
	if (cleanopt == "y" || cleanopt == "Y" || cleanopt == "yes" || cleanopt == "Yes")
	{
		LoadDriver();
	}
	system("cls");
	Log3(skCrypt(" Waiting for Fortnite..."));
	sss();
	MessageBox(NULL, skCrypt("Click OK In Lobby"), skCrypt("Information"), NULL);
	hwnd = FindWindowA(0, "Fortnite  ");
	processID = _GetProcessId("FortniteClient-Win64-Shipping.exe");
	std::cout << skCrypt("\n");

	Log3(skCrypt(" "));
	Beep(350, 300);
	GetWindowThreadProcessId(hwnd, &processID);
	Sleep(200);
	if (driver->Init(FALSE)) {
		driver->Attach(processID);
		base_address = driver->GetModuleBase(L"FortniteClient-Win64-Shipping.exe");
	}
	Log3(skCrypt(" "));
	printf("[ GAIN V1.8b ] Support ID: %p", (void*)base_address);
	printf(" If it is 00000000000000 prob the drivers didn't load, disable your antivirus and try again!");
	Sleep(1500);
	MouseController::Init();
	xCreateWindow();
	xInitD3d();
	xMainLoop();
	HANDLE handle = CreateThread_Esp(nullptr, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(espthread), nullptr, NULL, nullptr);
	xShutdown();
}

auto isVisible(uintptr_t test) -> bool
{
	float fLastSubmitTime = read<float>(Offsets::External::Mesh + Offsets::External::fLastSubmitTime);
	float fLastRenderTimeOnScreen = read<float>(Offsets::External::Mesh + Offsets::External::fLastRenderTimeOnScreen);
	const float fVisionTick = 0.06f;
	bool bVisible = fLastRenderTimeOnScreen + fVisionTick >= fLastSubmitTime;
	return bVisible;
}

void AimAt(DWORD_PTR entity)
{
	uint64_t currentactormesh = read<uint64_t>(entity + Offsets::External::Mesh);
	auto rootHead = GetBoneWithRotation(currentactormesh, def::hitbox);
	Vector3 rootHeadOut = ProjectWorldToScreen(rootHead);
	if (rootHeadOut.y != 0 || rootHeadOut.y != 0)
	{
		aimbot(rootHeadOut.x, rootHeadOut.y);
	}
}

ImU32 RGBtoU32(int r, int g, int b)
{
	float fr = (float)r / 255.0;
	float fg = (float)g / 255.0;
	float fb = (float)b / 255.0;
	return ImGui::GetColorU32(ImVec4(fr, fg, fb, 1));
}
DWORD_PTR CurrentActorMesh;

// RADAR CREDITS GOES TO -> ud man#1337
void DrawESP() {
	
	if (drawbase)
	{
		ImGui::GetBackgroundDrawList()->AddText(ImVec2(35, 25), RGBtoU32(255, 255, 255), skCrypt("discord.gg/yXfppkYpd2"));
	}
	if (crosshair)
	{
		ImGui::GetBackgroundDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2 - CrosshairSize, Height / 2), RGBtoU32(255, 255, 255));
		ImGui::GetBackgroundDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2 + CrosshairSize, Height / 2), RGBtoU32(255, 255, 255));
		ImGui::GetBackgroundDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2, Height / 2 - CrosshairSize), RGBtoU32(255, 255, 255));
		ImGui::GetBackgroundDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2, Height / 2 + CrosshairSize), RGBtoU32(255, 255, 255));
	}
	if (circletype == true)
	{
		if (square_fov) {
			ImVec2 rectMin = ImVec2(ScreenCenterX - def::AimbotFov, ScreenCenterY - def::AimbotFov);
			ImVec2 rectMax = ImVec2(ScreenCenterX + def::AimbotFov, ScreenCenterY + def::AimbotFov);
			ImU32 color = IM_COL32(255, 255, 255, 128);
			float rounding = 0.f;
			float thickness = 0.5f;
			ImGui::GetBackgroundDrawList()->AddRect(rectMin, rectMax, color, rounding, ImDrawCornerFlags_All, thickness);
		}

		if (fovcircle) {
			ImVec2 center = ImVec2(ScreenCenterX, ScreenCenterY);
			float radius = def::AimbotFov;
			ImU32 color = IM_COL32(255, 255, 255, 255);
			int numSegments = 100;
			float thickness = 0.5f;
			ImGui::GetBackgroundDrawList()->AddCircle(center, radius, color, numSegments, thickness);
		}

		if (fovcirclefilled) {
			ImVec2 center = ImVec2(ScreenCenterX, ScreenCenterY);
			float radius = def::AimbotFov;
			int numSegments = 100;
			ImU32 color = IM_COL32(0, 0, 0, 160);
			float thickness = 220.0f;
			float outlineThickness = 0.5f;
			ImGui::GetBackgroundDrawList()->AddCircleFilled(center, radius, color, numSegments);
			ImGui::GetBackgroundDrawList()->AddCircle(center, radius, IM_COL32(255, 80, 80, 255), thickness, outlineThickness);
		}
		if (SquareFovFilled) {
			ImVec2 rectMin = ImVec2(ScreenCenterX - def::AimbotFov, ScreenCenterY - def::AimbotFov);
			ImVec2 rectMax = ImVec2(ScreenCenterX + def::AimbotFov, ScreenCenterY + def::AimbotFov);
			ImU32 color = IM_COL32(255, 80, 80, 255);
			float rounding = 0.f;
			float thickness = 0.5f;
			ImGui::GetBackgroundDrawList()->AddRectFilled(rectMin, rectMax, IM_COL32(0, 0, 0, 160));
			ImGui::GetBackgroundDrawList()->AddRect(rectMin, rectMax, color, rounding, ImDrawCornerFlags_All, thickness);
		}
	}

	HitBoxAimKey();

	float closestDistance = FLT_MAX;
	DWORD_PTR closestPawn = NULL;


	// -------------------------------------------------------
	Actors::Uworld = read<uint64_t>(base_address + GWorld);

	Actors::Gameinstance = read<uint64_t>(Actors::Uworld + Offsets::External::Gameinstance);

	Actors::LocalPlayers = read<uint64_t>(Actors::Gameinstance + Offsets::External::LocalPlayers);

	Actors::Localplayer = read<uint64_t>(Actors::LocalPlayers);

	Actors::PlayerController = read<uint64_t>(Actors::Localplayer + Offsets::External::PlayerController);

	Actors::LocalPawn = read<uint64_t>(Actors::PlayerController + Offsets::External::LocalPawn);

	Actors::PlayerState = read<uint64_t>(Actors::LocalPawn + Offsets::External::PlayerState);

	Actors::Rootcomp = read<uint64_t>(Actors::LocalPawn + Offsets::External::RootComponet);

	Actors::GameState = read<uint64_t>(Actors::Uworld + Offsets::External::GameState);

	Actors::PlayerArray = read<uint64_t>(Actors::GameState + Offsets::External::PlayerArray);
	// -------------------------------------------------------


	// -------------------------------------------------------
	const uintptr_t CURRENT_ACTOR_OFFSET = Offsets::External::CurrentActor;
	const uintptr_t MESH_OFFSET = Offsets::External::Mesh;
	const uintptr_t TEAM_ID_OFFSET = Offsets::External::TeamId;
	const uintptr_t PLAYER_STATE_OFFSET = Offsets::External::PlayerState;
	const uintptr_t WEAPON_OFFSET = 0x8F8;
	const uintptr_t RELOADING_OFFSET = 0x348;
	const uintptr_t TARGETING_OFFSET = 0xB05;
	const uintptr_t OTHER_PLAYER_STATE_OFFSET = 0x290;
	// -------------------------------------------------------


	   uintptr_t PlayerArrayOffset = Offsets::External::PlayerArray;
	   int PlayerSize = read<int>(Actors::GameState + (PlayerArrayOffset + sizeof(uintptr_t)));

	   for (int i = 0; i < PlayerSize; i++)
	   {
		   const auto& player = read<uintptr_t>(Actors::PlayerArray + i * 0x8);
		   const auto& CurrentActor = read<uintptr_t>(player + CURRENT_ACTOR_OFFSET);
		   const uint64_t CurrentActorMesh = read<uint64_t>(CurrentActor + MESH_OFFSET);
		   const int MyTeamId = read<int>(Actors::PlayerState + TEAM_ID_OFFSET);
		   const DWORD64 otherPlayerState = read<uint64_t>(CurrentActor + OTHER_PLAYER_STATE_OFFSET);
		   const int ActorTeamId = read<int>(otherPlayerState + TEAM_ID_OFFSET);
		   const uintptr_t CurrentWeapon = read<uintptr_t>(CurrentActor + WEAPON_OFFSET);
		   const bool bIsReloadingWeapon = read<bool>(CurrentWeapon + RELOADING_OFFSET);
		   const bool bIsTargeting = read<bool>(CurrentWeapon + TARGETING_OFFSET);
		   if (MyTeamId == ActorTeamId) continue;


		   if (SelfEsp) {
		   }
		   else {
			   if (CurrentActor == Actors::LocalPawn) {
				   continue;
			   }
		   }

		   // --- Vector3 ---
		   Vector3 Headpos = GetBoneWithRotation(CurrentActorMesh, 68);
		   Vector3 bone66 = GetBoneWithRotation(CurrentActorMesh, 66);
		   Vector3 top = ProjectWorldToScreen(bone66);
		   Vector3 bone0 = GetBoneWithRotation(CurrentActorMesh, 0);
		   Vector3 bottom = ProjectWorldToScreen(bone0);
		   Vector3 Headbox = ProjectWorldToScreen(Vector3(Headpos.x, Headpos.y, Headpos.z + 15));
		   Vector3 w2shead = ProjectWorldToScreen(Headpos);
		   Vector3 vHeadBone = GetBoneWithRotation(CurrentActorMesh, 68);
		   Vector3 vRootBone = GetBoneWithRotation(CurrentActorMesh, 0);
		   Vector3 vHeadBoneOut = ProjectWorldToScreen(Vector3(vHeadBone.x, vHeadBone.y, vHeadBone.z + 15));
		   localactorpos = read<Vector3>(Actors::Rootcomp + 0x128);


		   // --- Float's ---
		   const float distanceThreshold = def::VisDist * ChangerFOV;
		   const float distance = localactorpos.Distance(Headpos);
		   float CornerHeight = abs(Headbox.y - bottom.y);
		   float CornerWidth = CornerHeight * BoxWidthValue;
		   // ----------------

		   if (MyTeamId != ActorTeamId)
		   {
			   if (distance <= distanceThreshold)
			   {

				   if (AimWhileJumping) {
					   write<bool>(Actors::LocalPawn + 0x4DD6, true);
				   }

				   if (carFly)
				   {
					   if (Actors::LocalPawn)
					   {
						   struct {
							   float ProjectionMatrix[4][4];
						   } view = { 0 };
						   uint64_t VEHICLE_STATS = read<uint64_t>(Actors::LocalPawn + 0x2428);
						   if (GetAsyncKeyState(VK_SPACE))write<char>(VEHICLE_STATS + 0x6DA, 1);
					   }
				   }


				   if (InstaRes) {
					   write<float>(Actors::LocalPawn + Offsets::External::ReviveFromDBNOTime, .001);
				   }


				   if (AirStuck) {
					   if (GetAsyncKeyState(VK_MENU), VK_SPACE) {
						   write<float>(Actors::LocalPawn + 0x64, 0);
					   }
					   else {
						   write<float>(Actors::LocalPawn + 0x64, 1);
					   }
				   }

				   add_players_radar(vRootBone);

				   if (WindowStreamProof) {
					   SetWindowDisplayAffinity(Window, WDA_EXCLUDEFROMCAPTURE);
				   }
				   if (!WindowStreamProof) {
					   SetWindowDisplayAffinity(Window, !WDA_EXCLUDEFROMCAPTURE);
				   }

				   if (fillbox)
				   {
					   DrawFilledRect(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, ImColor(0, 0, 0, 125));
				   }

				   if (TriangleEsp) {
					   if (isVisible(CurrentActorMesh)) {
						   DrawCorneredTriangle(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, RGBtoU32(255, 255, 255), Boxthinkness);
					   }
					   else {
						   DrawCorneredTriangle(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, RGBtoU32(255, 0, 0), Boxthinkness);
					   }
				   }
				   if (CornerBoxEsp)
				   {
					   if (isVisible(CurrentActorMesh))
					   {
						   DrawCorneredBox(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, RGBtoU32(255, 255, 255), Boxthinkness);
					   }
					   else
					   {
						   DrawCorneredBox(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, RGBtoU32(255, 0, 0), Boxthinkness);
					   }
				   }
				   if (BoxEsp)
				   {
					   if (isVisible(CurrentActorMesh))
					   {
						   DrawBox(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, RGBtoU32(255, 255, 255), Boxthinkness);
					   }
					   else
					   {
						   DrawBox(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, RGBtoU32(255, 0, 0), Boxthinkness);
					   }
				   }
				   if (Skeleton)
				   {
					   Vector3 vHeadBone = GetBoneWithRotation(CurrentActorMesh, 68);
					   Vector3 vHip = GetBoneWithRotation(CurrentActorMesh, 2);
					   Vector3 vNeck = GetBoneWithRotation(CurrentActorMesh, 67);
					   Vector3 vUpperArmLeft = GetBoneWithRotation(CurrentActorMesh, 9);
					   Vector3 vUpperArmRight = GetBoneWithRotation(CurrentActorMesh, 38);
					   Vector3 vLeftHand = GetBoneWithRotation(CurrentActorMesh, 10);
					   Vector3 vRightHand = GetBoneWithRotation(CurrentActorMesh, 39);
					   Vector3 vLeftHand1 = GetBoneWithRotation(CurrentActorMesh, 30);
					   Vector3 vRightHand1 = GetBoneWithRotation(CurrentActorMesh, 59);
					   Vector3 vRightThigh = GetBoneWithRotation(CurrentActorMesh, 78);
					   Vector3 vLeftThigh = GetBoneWithRotation(CurrentActorMesh, 71);
					   Vector3 vRightCalf = GetBoneWithRotation(CurrentActorMesh, 79);
					   Vector3 vLeftCalf = GetBoneWithRotation(CurrentActorMesh, 72);
					   Vector3 vLeftFoot = GetBoneWithRotation(CurrentActorMesh, 73);
					   Vector3 vRightFoot = GetBoneWithRotation(CurrentActorMesh, 80);
					   Vector3 vPelvisOut = GetBoneWithRotation(CurrentActorMesh, 8);
					   Vector3 vHeadBoneOut = ProjectWorldToScreen(vHeadBone);
					   Vector3 vPelvis = ProjectWorldToScreen(vPelvisOut);
					   Vector3 vHipOut = ProjectWorldToScreen(vHip);
					   Vector3 vNeckOut = ProjectWorldToScreen(vNeck);
					   Vector3 vUpperArmLeftOut = ProjectWorldToScreen(vUpperArmLeft);
					   Vector3 vUpperArmRightOut = ProjectWorldToScreen(vUpperArmRight);
					   Vector3 vLeftHandOut = ProjectWorldToScreen(vLeftHand);
					   Vector3 vRightHandOut = ProjectWorldToScreen(vRightHand);
					   Vector3 vLeftHandOut1 = ProjectWorldToScreen(vLeftHand1);
					   Vector3 vRightHandOut1 = ProjectWorldToScreen(vRightHand1);
					   Vector3 vRightThighOut = ProjectWorldToScreen(vRightThigh);
					   Vector3 vLeftThighOut = ProjectWorldToScreen(vLeftThigh);
					   Vector3 vRightCalfOut = ProjectWorldToScreen(vRightCalf);
					   Vector3 vLeftCalfOut = ProjectWorldToScreen(vLeftCalf);
					   Vector3 vLeftFootOut = ProjectWorldToScreen(vLeftFoot);
					   Vector3 vRightFootOut = ProjectWorldToScreen(vRightFoot);
					   DrawLine(vHeadBoneOut.x, vHeadBoneOut.y, vNeckOut.x, vNeckOut.y, &Col.white, 0.6f);
					   DrawLine(vHipOut.x, vHipOut.y, vNeckOut.x, vNeckOut.y, &Col.white, 0.6f);
					   DrawLine(vUpperArmLeftOut.x, vUpperArmLeftOut.y, vNeckOut.x, vNeckOut.y, &Col.white, 0.6f);
					   DrawLine(vUpperArmRightOut.x, vUpperArmRightOut.y, vNeckOut.x, vNeckOut.y, &Col.white, 0.6f);
					   DrawLine(vLeftHandOut.x, vLeftHandOut.y, vUpperArmLeftOut.x, vUpperArmLeftOut.y, &Col.white, 0.6f);
					   DrawLine(vRightHandOut.x, vRightHandOut.y, vUpperArmRightOut.x, vUpperArmRightOut.y, &Col.white, 0.6f);
					   DrawLine(vLeftHandOut.x, vLeftHandOut.y, vLeftHandOut1.x, vLeftHandOut1.y, &Col.white, 0.6f);
					   DrawLine(vRightHandOut.x, vRightHandOut.y, vRightHandOut1.x, vRightHandOut1.y, &Col.white, 0.6f);
					   DrawLine(vLeftThighOut.x, vLeftThighOut.y, vHipOut.x, vHipOut.y, &Col.white, 0.6f);
					   DrawLine(vRightThighOut.x, vRightThighOut.y, vHipOut.x, vHipOut.y, &Col.white, 0.6f);
					   DrawLine(vLeftCalfOut.x, vLeftCalfOut.y, vLeftThighOut.x, vLeftThighOut.y, &Col.white, 0.6f);
					   DrawLine(vRightCalfOut.x, vRightCalfOut.y, vRightThighOut.x, vRightThighOut.y, &Col.white, 0.6f);
					   DrawLine(vLeftFootOut.x, vLeftFootOut.y, vLeftCalfOut.x, vLeftCalfOut.y, &Col.white, 0.6f);
					   DrawLine(vRightFootOut.x, vRightFootOut.y, vRightCalfOut.x, vRightCalfOut.y, &Col.white, 0.6f);
				   }
				   if (Snaplines)
				   {
					   if (isVisible(CurrentActorMesh))
					   {
						   DrawLine(Width / 2 - 0, Height / 2 - 540, bottom.x, bottom.y, &Col.white, 0.5);
					   }
					   else
					   {
						   DrawLine(Width / 2 - 0, Height / 2 - 540, bottom.x, bottom.y, &Col.red, 0.5);
					   }
				   }

				   if (DynamicEsp)
				   {
					   Vector3 bottom1 = ProjectWorldToScreen(Vector3(vRootBone.x + 40, vRootBone.y - 1, vRootBone.z));
					   Vector3 bottom2 = ProjectWorldToScreen(Vector3(vRootBone.x - 40, vRootBone.y - 1, vRootBone.z));
					   Vector3 bottom3 = ProjectWorldToScreen(Vector3(vRootBone.x - 40, vRootBone.y - 1, vRootBone.z));
					   Vector3 bottom4 = ProjectWorldToScreen(Vector3(vRootBone.x + 40, vRootBone.y - 1, vRootBone.z));
					   Vector3 top1 = ProjectWorldToScreen(Vector3(vHeadBone.x + 40, vHeadBone.y, vHeadBone.z + 15));
					   Vector3 top2 = ProjectWorldToScreen(Vector3(vHeadBone.x - 40, vHeadBone.y, vHeadBone.z + 15));
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(top1.x, top1.y), ImColor(0, 0, 0, 255), 3.1f);
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(top2.x, top2.y), ImColor(0, 0, 0, 255), 3.1f);
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(bottom2.x, bottom2.y), ImColor(0, 0, 0, 255), 3.1f);
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(top1.x, top1.y), ImVec2(top2.x, top2.y), ImColor(0, 0, 0, 255), 3.1f);
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(top1.x, top1.y), ImColor(255, 255, 255, 255), 0.1f);
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(top2.x, top2.y), ImColor(255, 255, 255, 255), 0.1f);
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(bottom2.x, bottom2.y), ImColor(255, 255, 255, 255), 0.1f);
					   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(top1.x, top1.y), ImVec2(top2.x, top2.y), ImColor(255, 255, 255, 255), 0.1f);
				   }
				   if (PlayerDistanceEsp)
				   {
					   char name[64];
					   sprintf_s(name, skCrypt("[%2.fm]"), distance);
					   DrawString(16, Headbox.x, Headbox.y - 15, &Col.white, true, true, name);
				   }
				   if (reloadcheck)
				   {
					   if (bIsReloadingWeapon)
						   ImGui::GetBackgroundDrawList()->AddText(ImVec2(Headbox.x, Headbox.y + 30), IM_COL32(255, 0, 0, 0), "RELOADING");
					   else
						   ImGui::GetBackgroundDrawList()->AddText(ImVec2(Headbox.x, Headbox.y + 30), IM_COL32(255, 255, 255, 255), "NOT RELOADING");
				   }
				   if (targetingcheck)
				   {
					   if (bIsReloadingWeapon)
						   ImGui::GetBackgroundDrawList()->AddText(ImVec2(top.x, top.y + 30), IM_COL32(255, 0, 0, 0), "Player is Targeting");
					   else
						   ImGui::GetBackgroundDrawList()->AddText(ImVec2(top.x, top.y + 30), IM_COL32(255, 255, 255, 255), "Player is Not Targeting");
				   }
				   if (ThreeDBoxEsp)
				   {
					   if (vHeadBoneOut.x != 0 || vHeadBoneOut.y != 0 || vHeadBoneOut.z != 0)
					   {
						   ImU32 ESPSkeleton;
						   if (isVisible(CurrentActorMesh))
						   {
							   ESPSkeleton = RGBtoU32(255, 255, 255);
						   }
						   else if (!isVisible(CurrentActorMesh))
						   {
							   ESPSkeleton = RGBtoU32(255, 0, 0);
						   }
						   Vector3 bottom1 = ProjectWorldToScreen(Vector3(vRootBone.x + 40, vRootBone.y - 40, vRootBone.z));
						   Vector3 bottom2 = ProjectWorldToScreen(Vector3(vRootBone.x - 40, vRootBone.y - 40, vRootBone.z));
						   Vector3 bottom3 = ProjectWorldToScreen(Vector3(vRootBone.x - 40, vRootBone.y + 40, vRootBone.z));
						   Vector3 bottom4 = ProjectWorldToScreen(Vector3(vRootBone.x + 40, vRootBone.y + 40, vRootBone.z));
						   Vector3 top1 = ProjectWorldToScreen(Vector3(vHeadBone.x + 40, vHeadBone.y - 40, vHeadBone.z + 15));
						   Vector3 top2 = ProjectWorldToScreen(Vector3(vHeadBone.x - 40, vHeadBone.y - 40, vHeadBone.z + 15));
						   Vector3 top3 = ProjectWorldToScreen(Vector3(vHeadBone.x - 40, vHeadBone.y + 40, vHeadBone.z + 15));
						   Vector3 top4 = ProjectWorldToScreen(Vector3(vHeadBone.x + 40, vHeadBone.y + 40, vHeadBone.z + 15));
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(top1.x, top1.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(top2.x, top2.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom3.x, bottom3.y), ImVec2(top3.x, top3.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom4.x, bottom4.y), ImVec2(top4.x, top4.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(bottom2.x, bottom2.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(bottom3.x, bottom3.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom3.x, bottom3.y), ImVec2(bottom4.x, bottom4.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(bottom4.x, bottom4.y), ImVec2(bottom1.x, bottom1.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(top1.x, top1.y), ImVec2(top2.x, top2.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(top2.x, top2.y), ImVec2(top3.x, top3.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(top3.x, top3.y), ImVec2(top4.x, top4.y), ESPSkeleton, 0.1f);
						   ImGui::GetBackgroundDrawList()->AddLine(ImVec2(top4.x, top4.y), ImVec2(top1.x, top1.y), ESPSkeleton, 0.1f);
					   }
				   }
			   }
			   auto dx = w2shead.x - (Width / 2);
			   auto dy = w2shead.y - (Height / 2);
			   auto dist = sqrtf(dx * dx + dy * dy);
			   if (isVisible(CurrentActorMesh)) {

				   if (dist < def::AimbotFov && dist < closestDistance) {
					   closestDistance = dist;
					   closestPawn = CurrentActor;
				   }
			   }
		   }
		   if (norecoil)
		   {
			   if (GetAsyncKeyState(VK_LBUTTON))
			   {
				   write<float>(player_controller + 0x64, -1);
			   }
		   }
		   
	   }
	   DWORD_PTR LOL;
	   if (def::Aimbot)
	   {
		   if (isVisible(CurrentActorMesh))
		   {
			   if (keybind == 0)
			   {
				   if (closestPawn != 0)
				   {
					   if (closestPawn && GetAsyncKeyState(VK_RBUTTON))
					   {
						   if (def::Aimbot)
						   {
							   Vector3 hitbone = ProjectWorldToScreen(GetBoneWithRotation(def::hitbox, LOL));

							   if (hitbone.x != 0 || hitbone.y != 0 || hitbone.z != 0)
							   {
								   if (def::Aimbot && closestPawn && GetAsyncKeyState(VK_RBUTTON) < 0) {
									   AimAt(closestPawn);
								   }
							   }
						   }
					   }
				   }

				   else
				   {
					   closestDistance = FLT_MAX;
					   closestPawn = NULL;
				   }
			   }
		   }
		   else {}
		   if (isVisible(CurrentActorMesh))
		   {
			   if (keybind == 1)
			   {
				   if (closestPawn != 0)
				   {
					   if (closestPawn && GetAsyncKeyState(VK_LBUTTON))
					   {
						   if (def::Aimbot)
						   {
							   Vector3 hitbone = ProjectWorldToScreen(GetBoneWithRotation(def::hitbox, LOL));

							   if (hitbone.x != 0 || hitbone.y != 0 || hitbone.z != 0)
							   {
								   if (def::Aimbot && closestPawn && GetAsyncKeyState(VK_LBUTTON) < 0) {
									   AimAt(closestPawn);
								   }
							   }
						   }
					   }
				   }
				   else
				   {
					   closestDistance = FLT_MAX;
					   closestPawn = NULL;
				   }
			   }
		   }
		   else {}
		   if (isVisible(CurrentActorMesh))
		   {
			   if (keybind == 2)
			   {
				   if (closestPawn != 0)
				   {
					   if (closestPawn && GetAsyncKeyState(VK_MBUTTON))
					   {
						   if (def::Aimbot)
						   {
							   Vector3 hitbone = ProjectWorldToScreen(GetBoneWithRotation(def::hitbox, LOL));

							   if (hitbone.x != 0 || hitbone.y != 0 || hitbone.z != 0)
							   {
								   if (def::Aimbot && closestPawn && GetAsyncKeyState(VK_MBUTTON) < 0) {
									   AimAt(closestPawn);
								   }
							   }
						   }
					   }
				   }
				   else
				   {
					   closestDistance = FLT_MAX;
					   closestPawn = NULL;
				   }
			   }
		   }
		   else {}
	   }
	   if (radar)
	   {
		   fortnite_radar(radar_position_x, radar_position_y, radar_size, rect_radar);
	   }
}



void render() {
	switch (keybind)
	{
	case 0:
		def::aimkeypos = 1;
		break;
	case 1:
		def::aimkeypos = 0;
		break;
	case 2:
		def::aimkeypos = 2;
		break;
	}
	if (RenderOption == 0)
	{
		fovcirclefilled = false;
		square_fov = false;
		fovcircle = true;
		SquareFovFilled = false;
	}
	if (RenderOption == 1)
	{
		fovcircle = false;
		fovcirclefilled = false;
		square_fov = true;
		SquareFovFilled = false;
	}
	if (RenderOption == 2)
	{
		square_fov = false;
		fovcircle = false;
		fovcirclefilled = true;
		SquareFovFilled = false;
	}
	if (RenderOption == 3)
	{
		square_fov = false;
		fovcircle = false;
		fovcirclefilled = false;
		SquareFovFilled = true;
	}
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	DrawESP();
	if (GetAsyncKeyState(0x2D) & 1) {  // 0x2D = Insert
		ShowMenu = !ShowMenu;
	}
	if (ShowMenu)
	{
		ImVec4* colors = ImGui::GetStyle().Colors;
		colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
		colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
		colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
		colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_PopupBg] = ImVec4(0.19f, 0.19f, 0.19f, 0.92f);
		colors[ImGuiCol_Border] = ImVec4(0.19f, 0.19f, 0.19f, 0.29f);
		colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
		colors[ImGuiCol_FrameBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
		colors[ImGuiCol_FrameBgHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
		colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
		colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
		colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
		colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
		colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
		colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.40f, 0.54f);
		colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
		colors[ImGuiCol_CheckMark] = ImVec4(0.83f, 0.37f, 0.26f, 3.00f);
		colors[ImGuiCol_SliderGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
		colors[ImGuiCol_SliderGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
		colors[ImGuiCol_Button] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
		colors[ImGuiCol_ButtonHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
		colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
		colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
		colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 0.00f, 0.00f, 0.36f);
		colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.22f, 0.23f, 0.33f);
		colors[ImGuiCol_Separator] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
		colors[ImGuiCol_SeparatorHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
		colors[ImGuiCol_SeparatorActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
		colors[ImGuiCol_ResizeGrip] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
		colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
		colors[ImGuiCol_ResizeGripActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
		colors[ImGuiCol_Tab] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
		colors[ImGuiCol_TabHovered] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
		colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 0.36f);
		colors[ImGuiCol_TabUnfocused] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
		colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
		colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
		colors[ImGuiCol_TableBorderStrong] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
		colors[ImGuiCol_TableBorderLight] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
		colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
		colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
		colors[ImGuiCol_DragDropTarget] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
		colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 0.70f);
		colors[ImGuiCol_NavWindowingDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.20f);
		colors[ImGuiCol_ModalWindowDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.35f);
		ImGuiStyle& style = ImGui::GetStyle();
		style.WindowRounding = 7;
		style.ChildRounding = 4;
		style.FrameRounding = 3;
		style.PopupRounding = 4;
		ImGui::SetNextWindowSize(ImVec2(530.000f, 440.000f), ImGuiCond_Once);


		ImGui::Begin("									[INS] GainFN - Main v1.8b | @Fortnite", NULL, 34);
		static POINT Mouse;
		GetCursorPos(&Mouse);
		ImGui::GetBackgroundDrawList()->AddCircleFilled(ImVec2(Mouse.x, Mouse.y), float(4), ImColor(255, 0, 0), 10);
		ImDrawList* pDrawList;
		const auto& CurrentWindowPos = ImGui::GetWindowPos();
		const auto& pWindowDrawList = ImGui::GetWindowDrawList();
		const auto& pBackgroundDrawList = ImGui::GetBackgroundDrawList();
		const auto& pForegroundDrawList = ImGui::GetForegroundDrawList();



		ImGui::SetCursorPos(ImVec2(8.000f, 25.000f));
		if (ImGui::Button(skCrypt("Aim Settings"), ImVec2(120.000f, 30.000f)))
		{
			tab = 1;
		}

		ImGui::SetCursorPos(ImVec2(8.000f, 50.000f));
		if (ImGui::Button(skCrypt("Visual Settings"), ImVec2(120.000f, 30.000f)))
		{
			tab = 2;
		}

		ImGui::SetCursorPos(ImVec2(8.000f, 75.000f));
		if (ImGui::Button(skCrypt("Mods Settings"), ImVec2(120.000f, 30.000f)))
		{
			tab = 3;
		}

		ImGui::SetCursorPos(ImVec2(8.000f, 100.000f));
		if (ImGui::Button(skCrypt("Information"), ImVec2(120.000f, 30.000f)))
		{
			tab = 4;
		}
		switch (tab)
		{
		case 1:

			ImGui::SetCursorPos(ImVec2(143.000f, 27.000f));
			ImGui::Checkbox("Aimbot", &def::Aimbot);


			ImGui::SetCursorPos(ImVec2(143.000f, 50.000f));
			ImGui::Checkbox(skCrypt("FOV Circle"), &circletype);
			ImGui::SetNextItemWidth(150.000f);
			ImGui::SameLine();

			ImGui::Combo(skCrypt(""), &RenderOption, skCrypt("Circle\0Square\0Filled Circle\0Filled Square\0"));
			ImGui::SetNextItemWidth(250.000f);

			ImGui::SetCursorPos(ImVec2(143.000f, 73.000f));
			ImGui::SliderInt(skCrypt("Esp Distance"), &def::VisDist, 50, 300);

			ImGui::SetNextItemWidth(250.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 96.000f));
			ImGui::SliderFloat(skCrypt("FOV Size"), &def::AimbotFov, 50, 800);

			ImGui::SetNextItemWidth(250.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 119.000f));
			ImGui::SliderFloat(skCrypt("Smoothness"), &Smoothness, 1.500f, 30.000f);

			ImGui::SetNextItemWidth(250.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 142.000f));
			ImGui::Combo(skCrypt("Aim Key"), &keybind, skCrypt("Right Mouse\0Left Mouse\0Middle Mouse\0"));

			ImGui::SetNextItemWidth(250.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 165.000f));
			ImGui::Combo(skCrypt("Aimbone"), &def::hitboxpos, hitboxes, sizeof(hitboxes) / sizeof(*hitboxes));

			ImGui::SetNextItemWidth(250.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 195.000f));
			ImGui::Checkbox(skCrypt("StreamProof"), &WindowStreamProof);

			ImGui::SetCursorPos(ImVec2(143.000f, 50.000f));
			break;
		case 2:

			ImGui::SetCursorPos(ImVec2(143.000f, 27.000f));
			ImGui::Checkbox(skCrypt("Box Esp"), &BoxEsp);

			ImGui::SetCursorPos(ImVec2(143.000f, 50.000f));
			ImGui::Checkbox(skCrypt("CornerBox Esp"), &CornerBoxEsp);

			ImGui::SetCursorPos(ImVec2(143.000f, 73.000f));
			ImGui::Checkbox(skCrypt("CornerBox Filled Esp"), &fillbox);

			ImGui::SetCursorPos(ImVec2(143.000f, 96.000f));
			ImGui::Checkbox(skCrypt("3D Box Esp"), &ThreeDBoxEsp);

			ImGui::SetCursorPos(ImVec2(143.000f, 119.000f));
			ImGui::Checkbox(skCrypt("Distance"), &PlayerDistanceEsp);

			ImGui::SetCursorPos(ImVec2(143.000f, 142.000f));
			ImGui::Checkbox(skCrypt("Snaplines"), &Snaplines);

			ImGui::SetCursorPos(ImVec2(143.000f, 188.000f));
			ImGui::Checkbox(skCrypt("Crosshair"), &crosshair);

			ImGui::SetNextItemWidth(150.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 211.000f));
			ImGui::SliderInt(skCrypt("Line Thickness"), &LineThinkness, 1, 10);

			ImGui::SetNextItemWidth(150.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 234.000f));
			ImGui::SliderInt(skCrypt("Box Thickness"), &Boxthinkness, 1, 10);

			ImGui::SetNextItemWidth(150.000f);
			ImGui::SetCursorPos(ImVec2(143.000f, 257.000f));
			ImGui::SliderFloat(skCrypt("Box Width"), &BoxWidthValue, 0.40, 25.f);

			ImGui::SetCursorPos(ImVec2(143.000f, 280.000f));
			ImGui::SetNextItemWidth(250.000f);
			ImGui::SliderInt(skCrypt("Crosshair Size"), &CrosshairSize, 2.000f, 30.000f);

			ImGui::SetCursorPos(ImVec2(143.000f, 303.000f));
			ImGui::Checkbox(skCrypt("SelfEsp"), &SelfEsp);

			ImGui::SetCursorPos(ImVec2(143.000f, 328.000f));
			ImGui::Checkbox(skCrypt("ReloadCheck"), &reloadcheck);

			ImGui::SetCursorPos(ImVec2(143.000f, 353.000f));
			ImGui::Checkbox(skCrypt("TargetingCheck"), &targetingcheck);

			ImGui::SetCursorPos(ImVec2(143.000f, 378.000f));
			ImGui::Checkbox(skCrypt("NoRecoil"), &norecoil);

			ImGui::SetCursorPos(ImVec2(143.000f, 403.000f));
			ImGui::Checkbox(skCrypt("Dynamic Box Esp"), &DynamicEsp);

			ImGui::SetCursorPos(ImVec2(143.000f, 428.000f));
			ImGui::Checkbox(skCrypt("Skeleton Esp"), &Skeleton);

			ImGui::SetCursorPos(ImVec2(143.000f, 453.000f));
			ImGui::Checkbox(skCrypt("Tirangle Esp"), &TriangleEsp);

			break;

		case 3:
			ImGui::SetCursorPos(ImVec2(143.000f, 27.000f));
			ImGui::Checkbox(skCrypt("Aim While Jumping"), &AimWhileJumping);

			ImGui::SetCursorPos(ImVec2(143.000f, 50.000f));
			ImGui::Checkbox(skCrypt("Airstuck"), &AirStuck);

			ImGui::SetCursorPos(ImVec2(143.000f, 73.000f));
			ImGui::Checkbox(skCrypt("Carfly"), &carFly);

			ImGui::SetCursorPos(ImVec2(143.000f, 96.000f));
			ImGui::Checkbox(skCrypt("Instant Revive (TEST)"), &InstaRes);

			break;


		case 4:
			ImGui::SetCursorPos(ImVec2(143.000f, 27.000f));
			ImGui::Text(skCrypt("Discord | discord.gg/freecheats"));

			ImGui::SetCursorPos(ImVec2(143.000f, 50.000f));
			ImGui::Text(skCrypt("Founder | GainToos/Smitsmeister"));

			ImGui::SetCursorPos(ImVec2(143.000f, 73.000f));
			ImGui::Text("(SupportID)  base id: %p", (void*)base_address);

			break;

		}

	}



	ImGui::EndFrame();
	D3dDevice->SetRenderState(D3DRS_ZENABLE, false);
	D3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
	D3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
	D3dDevice->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);

	if (D3dDevice->BeginScene() >= 0)
	{
		ImGui::Render();
		ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
		D3dDevice->EndScene();
	}
	HRESULT result = D3dDevice->Present(NULL, NULL, NULL, NULL);

	if (result == D3DERR_DEVICELOST && D3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
	{
		ImGui_ImplDX9_InvalidateDeviceObjects();
		D3dDevice->Reset(&d3dpp);
		ImGui_ImplDX9_CreateDeviceObjects();
	}
}

D3DPRESENT_PARAMETERS p_Params = { NULL };
HRESULT DirectXInit(HWND hWnd)
{
	//hide_thread(LI_FN(GetCurrentThread).get()());
	if (FAILED(Direct3DCreate9Ex(D3D_SDK_VERSION, &p_Object)))
		LI_FN(exit).get()(3);

	RtlSecureZeroMemory(&p_Params, sizeof(p_Params));
	p_Params.Windowed = TRUE;
	p_Params.SwapEffect = D3DSWAPEFFECT_DISCARD;
	p_Params.hDeviceWindow = hWnd;
	p_Params.MultiSampleQuality = D3DMULTISAMPLE_NONE;
	p_Params.BackBufferFormat = D3DFMT_A8R8G8B8;
	p_Params.BackBufferWidth = Width;
	p_Params.BackBufferHeight = Height;
	p_Params.EnableAutoDepthStencil = TRUE;
	p_Params.AutoDepthStencilFormat = D3DFMT_D16;
	p_Params.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;




	p_Object->Release();
	return S_OK;
}
HWND hijacked_hwnd{};


void xMainLoop()
{
	MSG Message;
	RtlZeroMemory(&Message, sizeof(Message));
	DirectXInit(hijacked_hwnd);
	while ((Message.message != WM_QUIT) /* && (dt_info->tm_mday == DAY) */)
	{
		if (PeekMessageA(&Message, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessageA(&Message);
			continue;
		}
		HWND hwnd_active = GetForegroundWindow();
		if (hwnd_active == hwnd) {
			HWND hwndtest = GetWindow(hwnd_active, GW_HWNDPREV);
			SetWindowPos(Window, hwndtest, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
		}

		RECT rc;
		POINT xy;
		ZeroMemory(&rc, sizeof(RECT));
		ZeroMemory(&xy, sizeof(POINT));
		GetClientRect(hwnd, &rc);
		ClientToScreen(hwnd, &xy);
		rc.left = xy.x;
		rc.top = xy.y;

		ImGuiIO& io = ImGui::GetIO();
		io.IniFilename = NULL;
		io.ImeWindowHandle = hwnd;
		io.DeltaTime = 1.0f / 60.0f;

		POINT p;
		GetCursorPos(&p);
		io.MousePos.x = p.x - xy.x;
		io.MousePos.y = p.y - xy.y;

		if (GetAsyncKeyState(VK_LBUTTON)) {
			io.MouseDown[0] = true;
			io.MouseClicked[0] = true;
			io.MouseClickedPos[0].x = io.MousePos.x;
			io.MouseClickedPos[0].x = io.MousePos.y;
		}
		else
			io.MouseDown[0] = false;
		render();
	}
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();
	DestroyWindow(Window);
}

