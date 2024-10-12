namespace Celeste::Mod::VeryFunnyMod::Entities
{
	using namespace  ::Celeste::Mod;
	using namespace  ::Celeste;
	using namespace  ::System;
	using namespace  ::Microsoft::Xna::Framework;
	using namespace  ::Celeste::Mod::Entities;
	[CustomEntity("VeryFunnyMod/SampleSolid")]
	ref class SampleSolid :Solid
	{
	public:
		SampleSolid(EntityData^ data, Vector2 offset)
			:Solid(data->Position + offset, data->Width, data->Height, true)
		{

		}
	};
}

