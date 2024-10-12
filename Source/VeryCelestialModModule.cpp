#include "VeryCelestialModSettings.cpp"
#include "VeryCelestialModSession.cpp"
#include "VeryCelestialModSaveData.cpp"


using namespace Celeste::Mod;
using namespace System;
namespace Celeste::Mod::VeryCelestialMod
{

	ref class VeryCelestialModModule :EverestModule
	{
		static EverestModule^ _Instance;
		Type^ _SettingsType;
		Type^ _SessionType;
		Type^ _SaveDataType;
	public:
		property static VeryCelestialModModule^ Instance
		{
			VeryCelestialModModule^ get()
			{
				return (VeryCelestialModModule^)_Instance;
			}

			void set(VeryCelestialModModule^ value)
			{
				_Instance = value;
			}
		}
		property Type^ SettingsType {
			Type^ get()override { return _SettingsType; }
		}
		property Type^ SessionType {
			Type^ get()override { return _SessionType; }
		}
		property Type^ SaveDataType {
			Type^ get()override { return _SaveDataType; }
		}
		static property VeryCelestialModSettings^ Settings
		{
			VeryCelestialModSettings^ get() { return dynamic_cast<VeryCelestialModSettings^> (Instance->_Settings); }
		}
		static property VeryCelestialModSaveData^ Savedata
		{
			VeryCelestialModSaveData^ get() { return dynamic_cast<VeryCelestialModSaveData^> (Instance->_SaveData); }
		}
		static property VeryCelestialModSession^ Session
		{
			VeryCelestialModSession^ get() { return dynamic_cast<VeryCelestialModSession^> (Instance->_Session); }
		}

		void Load()override {

		}
		void Unload()override {

		}
		VeryCelestialModModule()
		{
			VeryCelestialModModule::_Instance = this;
#if DEBUG
			// debug builds use verbose logging
			Logger::SetLogLevel("VeryCelestialModModule", LogLevel::Verbose);
#else
			// release builds use info logging to reduce spam in log files
			Logger::SetLogLevel("VeryCelestialModModule", LogLevel::Info);
#endif

		}
	};


}