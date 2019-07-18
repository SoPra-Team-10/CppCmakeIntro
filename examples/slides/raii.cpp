void doStuff() {
    std::lock_guard<std::mutex> lockGuard{mutex};
    shared_resource = 17;
    shared_resource += functionThatCanThrow();
}
