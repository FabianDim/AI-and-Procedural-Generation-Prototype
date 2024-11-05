<style>
  code{
    background-color: dark-grey;
    padding: 10px;
  }
font-family: Consolas, "Courier New", monospace;
</style>

<body>
  <h1>About this project</h1>
  <p>This project culminated two intensive assessment projects for our Advanced game development class. For the first part, we had to develop a system in unreal engine C++ and choose either AI or Procedural generation</p>

  <h2>Fabians Part of the Project AI - Behaviour Tree</h2>
  <p>Wanting to test myself, I created an AI behaviour tree inside the unreal engine using C++. I began by researching what a behaviour tree was. It was pretty straightforward to understand. A behaviour tree is a decision tree whereby each node type has different behaviours to iterate through its children.</p>
  <p>The base class was a behaviour tree that was inherited from UObject. It was hard to understand or find a straight answer as to what unreal class to base it on if one at all. </p>

  <pre><code>
  EStatus UFabiansBehaviourTree::Tick()
{
	if(CurrentStatus != EStatus::Running) OnInitialise(); /*this on initialise seems like its calling nothing however
	it is actually allowing subclasses to override the definition and use their own definition for their intended needs
	this goes for the on terminate as well*/
	CurrentStatus = update();
	if(CurrentStatus != EStatus::Running) OnTerminate(CurrentStatus);
	return CurrentStatus;
} </pre></code>

<p>This tick function served as the base for how the other classes, such as the sequences and the selectors, would use the update methods and understand the statuses each action would give. Statuses are the foundation for how the tree works. An action or a class's update method would perform actions, and if things succeeded, they would return
  EStatus::Succeed, which is an enum that was created. Otherwise, they could fail and be considered EStatus::Fail or be considered EStatus::Running if they are running.
invalid.</p>
</body>
