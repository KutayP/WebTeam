#include <stdio.h> // Bu k�t�phaneyi dahil etmelisiniz
#include <string.h> // Bu k�t�phaneyi de dahil etmelisiniz

int main()
{
    // Kullan�c�dan bir c�mle almak i�in bir karakter dizisi olu�turuyoruz
    char sentence[256];

    // Kullan�c�dan c�mleyi almak i�in printf() fonksiyonunu kullan�yoruz
    printf("L�tfen bir c�mle girin: ");

    // Kullan�c�dan girilen c�mleyi almak i�in scanf() fonksiyonunu kullan�yoruz
    scanf("%[^\n]s", sentence);

    // Al�nan c�mleyi ekrana yazd�rmak i�in printf() fonksiyonunu kullan�yoruz
    printf("Girdi�iniz c�mle: %s\n", sentence);

    // Al�nan c�mleyi s�ylemek i�in strlen() fonksiyonunu kullan�yoruz
    for (int i = 0; i < strlen(sentence); i++)
    {
        // Her karakteri tek tek ekrana yazd�rmak i�in printf() fonksiyonunu kullan�yoruz
        printf("%c", sentence[i]);

        // Her karakter aras�nda bir s�re beklemek i�in usleep() fonksiyonunu kullan�yoruz
        usleep(100000); // 100000 microsecond = 0.1 second
    }

    // Bir sat�r sonu eklemek i�in printf() fonksiyonunu kullan�yoruz
    printf("\n");

    return 0;
}
