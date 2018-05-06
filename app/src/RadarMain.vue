<template>
  <div id="RadarMain">
    <DataView class="col-xl-8"></DataView>
    <AngleDisplay class="col-xl-12 angle-display"></AngleDisplay>
  </div>
</template>

<script>
import DataView from "./components/DataView";
import AngleDisplay from "./components/AngleDisplay";

export default {
  name: "RadarMain",
  components: {
    DataView,
    AngleDisplay
  }
};
</script>
<style>
body {
  background-color: #001427;
  color: #fdffff;
}
h1 {
  margin-top: 50px;
  display: block;
}
@media screen and (max-width: 1200px) {
  .angle-display {
    display: none;
  }
}
@media screen and (max-width: 550px) {
  .title {
    padding-bottom: 50px;
  }
}
</style>
