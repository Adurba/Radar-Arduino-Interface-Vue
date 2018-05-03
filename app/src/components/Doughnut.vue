<script>
import { Doughnut } from 'vue-chartjs'

export default {
  name: 'Doughnut',
  extends: Doughnut,
  data () {
    return {
      datacollection: {
        labels: [
          'Speed',
          'Blank'
        ],
        datasets: [
          {label: ['Speed', 'Blank'],
            backgroundColor: ['#123456', '#347698'],
            data: [Math.random() * 100, Math.random() * 100]
          }
        ]
      }
    }
  },
  mounted () {
    this.renderChart(this.datacollection, {
      responsive: true,
      maintainAspectRatio: false
    })
  }
}
</script>

<style scoped>

</style>
