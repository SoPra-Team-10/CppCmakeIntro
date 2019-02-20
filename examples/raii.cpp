auto readJsonFromFile(const std::string &fileName) -> int {
    File f{fileName}
    Json j = f.parse();
    return j["ABC"];
}
