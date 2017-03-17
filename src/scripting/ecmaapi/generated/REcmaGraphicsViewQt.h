// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAGRAPHICSVIEWQT_H
        #define RECMAGRAPHICSVIEWQT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellGraphicsViewQt.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaGraphicsViewQt {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQWidget(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRGraphicsViewImage(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRGraphicsView(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RGraphicsViewImage:
        

        // methods of secondary base class RGraphicsViewImage:
        static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewportNumber
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewportNumber
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNavigationAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        autoZoom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoomTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        zoom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        centerToBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        centerToPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBackgroundColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMargin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColorMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setHairlineMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHairlineMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAntialiasing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAntialiasing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScene
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPrinting
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPrinting
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPrintPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPrintPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPrintPointSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTextHeightThresholdOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextHeightThresholdOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isGridVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGridVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScene
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBackgroundColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        regenerate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateImage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        saveViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        restoreViewport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapFromView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapToView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapDistanceFromView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mapDistanceToView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resizeImage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintGridPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintGridLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPaintOrigin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPanOptimization
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPanOptimization
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBuffer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransform
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        emitDecorateBackground
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        emitDecorateForeground
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearBackground
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addToBackground
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBackgroundTransform
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColorCorrectionOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorCorrectionOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinimumLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPaintOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPaintOffset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isAlphaEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAlphaEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        disableGestures
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        repaintView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        repaintNow
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        giveFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSignalsBlocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSignalsBlocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFocusFrameWidget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        viewportChangeEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        emitUpdateSnapInfo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        emitUpdateTextLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        simulateMouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDevicePixelRatio
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        registerForFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RGraphicsViewQt* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellGraphicsViewQt* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RGraphicsViewQt*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RGraphicsViewQt*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RGraphicsViewQt*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    