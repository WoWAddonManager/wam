//
// Created by jordan on 12/23/19.
//

#ifndef WAM_ADDON_H
#define WAM_ADDON_H
#include <string>
#include <fstream>
#include <iostream>
#include <memory>
#include <vector>
#include <boost/serialization/access.hpp>
#include "settingsmanager.h"

class Addon {
public:

    enum WoWVersion {
        Retail,
        Classic,
        PTR
    };
    std::string m_addonName;
    std::string m_addon_version;
    std::string m_interface_version;
    std::string m_note;
    std::string m_path;
    std::string m_torrent_info;
    WoWVersion m_wow_version;


    static std::shared_ptr<Addon> create_addon(const std::string &p_file_path);
    static std::shared_ptr<std::vector<Addon>> get_installed_adddons(const WoWVersion &p_wow_version);

    friend std::ostream& operator<<(std::ostream &output, const Addon &addon);

private:

    Addon() = default;
    Addon(const std::string &p_addon_name, const std::string &p_addon_version,
          const std::string &p_interface_version, const std::string &p_addon_note,
          const WoWVersion &p_wow_version);

    std::string get_path() const;
    void set_path(const std::string &path);

    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned int version){
        ar & m_addonName;
        ar & m_addon_version;
        ar & m_interface_version;
        ar & m_note;
        ar & m_path;
        ar & m_wow_version;
    }

};


#endif //WAM_ADDON_H
