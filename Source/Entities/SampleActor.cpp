namespace Celeste::Mod::VeryFunnyMod::Entities
{
	using namespace ::Celeste::Mod;
	using namespace ::Celeste;
	using namespace ::System;
	using namespace Microsoft::Xna::Framework;
	using namespace ::Celeste::Mod::Entities;

	[CustomEntity("VeryFunnyMod/SampleActor")]
	ref class SampleActor :Actor
	{
	public:
		SampleActor(EntityData^ data, Vector2 offset)
			:Actor(data->Position + offset)
		{
		}
	};
}
