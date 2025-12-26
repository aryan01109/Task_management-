const API = "http://localhost:3000/tasks";

/* ========== ADD TASK ========== */
function addTask(){
    let title = document.getElementById("title").value;
    let desc  = document.getElementById("desc").value;

    if(title=="") return alert("Enter task title");

    fetch(API, {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ title, desc })
    })
    .then(res => res.json())
    .then(() => {
        document.getElementById("title").value="";
        document.getElementById("desc").value="";
        alert("Task Added!");
    });
}

/* ========== LOAD & SHOW TASKS ========== */
function showTasks(filter){
    fetch(API)
    .then(res => res.json())
    .then(tasks => {
        let list = document.getElementById("taskList");
        if(!list) return;

        list.innerHTML="";

        tasks.forEach(t=>{
            if(filter!="all" && t.status!=filter) return;

            let div = document.createElement("div");
            div.className="task "+t.status;
            div.innerHTML=`
                <strong>${t.title}</strong>
                <p>${t.desc}</p>
                <div>
                    <button onclick="setStatus(${t.id},'active')">▶</button>
                    <button onclick="setStatus(${t.id},'pending')">⏸</button>
                    <button onclick="setStatus(${t.id},'completed')">✔</button>
                    <button onclick="deleteTask(${t.id})">🗑</button>
                </div>
            `;
            list.appendChild(div);
        });

        updateCounts(tasks);
    });
}

/* ========== UPDATE STATUS ========== */
function setStatus(id,status){
    fetch(API + "/" + id, {
        method:"PUT",
        headers:{"Content-Type":"application/json"},
        body: JSON.stringify({ status })
    })
    .then(()=> showTasks("all"));
}

/* ========== DELETE TASK ========== */
function deleteTask(id){
    fetch(API + "/" + id, {
        method:"DELETE"
    })
    .then(()=> showTasks("all"));
}

/* ========== FILTER ========== */
function filterTasks(type){
    showTasks(type);
}

/* ========== COUNTERS ========== */
function updateCounts(tasks){
    document.getElementById("allCount").innerText = tasks.length;
    document.getElementById("activeCount").innerText = tasks.filter(t=>t.status=="active").length;
    document.getElementById("pendingCount").innerText = tasks.filter(t=>t.status=="pending").length;
    document.getElementById("doneCount").innerText = tasks.filter(t=>t.status=="completed").length;
}

/* ========== LOAD ON PAGE OPEN ========== */
if(document.getElementById("taskList")){
    showTasks("all");
}

