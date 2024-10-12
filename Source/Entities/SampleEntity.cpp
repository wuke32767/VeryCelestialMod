namespace Celeste::Mod::VeryFunnyMod::Entities
{
	using namespace ::Celeste::Mod;
	using namespace ::Celeste;
	using namespace ::System;
	using namespace ::Monocle;
	using namespace ::Microsoft::Xna::Framework;
	using namespace ::Celeste::Mod::Entities;

	[CustomEntity("VeryFunnyMod/SampleEntity")]
	ref	class SampleEntity :Entity
	{
	public: 
		SampleEntity(EntityData^ data, Vector2 offset)
			:Entity(data->Position + offset)
		{
			Add(GFX::SpriteBank->Create("sampleEntity"));
			Collider = gcnew Hitbox(16, 16, -8, -8);
		}
	};
} 
