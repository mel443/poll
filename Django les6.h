lass Choice(models.Model):
    name = models.CharField(max_length=20)

    def __str__(self):
        return self.name
        
class Poll(models.Model):
    name = models.CharField(max_length=50)
    description = models.TextField()
    choices = models.ManyToManyField(
        Choice, related_name='related_polls', blank=True)

        # forms.py
class CreatePollForm(ModelForm):
    class Meta:
        model = Poll
        fields = ['Vind u werken met Django leuk?', 'Ja', 'Nee', 'Weet ik niet']

    def __str__(self):
        return self.name
        