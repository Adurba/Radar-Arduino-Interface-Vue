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
            backgroundColor: ['#A8201A', '#001427'],
            borderColor: '#001427',
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
