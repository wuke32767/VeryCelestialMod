using namespace  Celeste::Mod;
namespace Celeste::Mod::VeryCelestialMod
{
	ref class VeryCelestialModSettings :EverestModuleSettings
	{
		bool _MySetting = false;
		[SettingSubText(":glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad::glad:")]
			property   bool  MySetting {
			bool get()
			{
				return _MySetting;
			}
			void set(bool v)
			{
				_MySetting = v;
			}
		}
	};

}


