# Generated by Django 4.1.1 on 2022-10-02 13:50

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('flights', '0002_airport_alter_flight_destination_alter_flight_origin'),
    ]

    operations = [
        migrations.AlterField(
            model_name='flight',
            name='destination',
            field=models.CharField(max_length=64),
        ),
        migrations.AlterField(
            model_name='flight',
            name='origin',
            field=models.CharField(max_length=64),
        ),
        migrations.DeleteModel(
            name='Airport',
        ),
    ]