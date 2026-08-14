class ZellnoLoadingScreenController
{
    static const string IMAGE_PATH = "ZellnoLoadingScreen/loadingscreen.edds";

    static void ApplyToLayout(Widget root)
    {
        if (!root)
        {
            Print("[ZellnoLoadingScreen] Layout root ausente.");
            return;
        }

        ImageWidget background = ImageWidget.Cast(root.FindAnyWidget("Background"));

        ApplyToImage(background);
    }

    static void ApplyToImage(ImageWidget background)
    {
        if (!background)
        {
            Print("[ZellnoLoadingScreen] Widget de fundo ausente.");
            return;
        }

        background.LoadImageFile(0, IMAGE_PATH, true);
        background.SetImage(0);
    }
};

modded class LoginQueueBase
{
    override Widget Init()
    {
        Widget root = super.Init();

        ZellnoLoadingScreenController.ApplyToLayout(root);

        return root;
    }
};

modded class LoginTimeBase
{
    override Widget Init()
    {
        Widget root = super.Init();

        ZellnoLoadingScreenController.ApplyToLayout(root);

        return root;
    }
};

modded class LoadingScreen
{
    void LoadingScreen(DayZGame game)
    {
        if (!m_ImageWidgetBackground)
        {
            Print("[ZellnoLoadingScreen] Fundo de carregamento ausente.");
            return;
        }

        m_ImageWidgetBackground.LoadMaskTexture("");

        ZellnoLoadingScreenController.ApplyToImage(m_ImageWidgetBackground);
    }
};
