#include <gazebo/gazebo.hh>

namespace gazebo {
    class WorldPluginTheOffice : public WorldPlugin {

    public: WorldPluginTheOffice() : WorldPlugin() {
	    printf("Welcome to Gabriele's World!\n");
	}

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
	}
    };

    GZ_REGISTER_WORLD_PLUGIN(WorldPluginTheOffice);
}
