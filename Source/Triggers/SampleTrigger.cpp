namespace Celeste::Mod::VeryFunnyMod::Entities
{
	using namespace ::Celeste::Mod;
	using namespace ::Celeste;
	using namespace ::System;
	using namespace ::Monocle;
	using namespace ::Microsoft::Xna::Framework;
	using namespace ::Celeste::Mod::Entities;

	[CustomEntity("VeryFunnyMod/SampleEntity")]
	ref	class  SampleTrigger:Trigger
	{
	public:
		SampleTrigger(EntityData^ data, Vector2 offset)
			:Trigger(data, offset)
		{
		}
	};
}
