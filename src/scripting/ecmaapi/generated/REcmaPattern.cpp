// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPattern.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaPattern::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPattern*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, isValid, "isValid");
            
            REcmaHelper::registerFunction(&engine, proto, hasDots, "hasDots");
            
            REcmaHelper::registerFunction(&engine, proto, clear, "clear");
            
            REcmaHelper::registerFunction(&engine, proto, getFileName, "getFileName");
            
            REcmaHelper::registerFunction(&engine, proto, getName, "getName");
            
            REcmaHelper::registerFunction(&engine, proto, isLoaded, "isLoaded");
            
            REcmaHelper::registerFunction(&engine, proto, load, "load");
            
            REcmaHelper::registerFunction(&engine, proto, getPatternLines, "getPatternLines");
            
            REcmaHelper::registerFunction(&engine, proto, addPatternLine, "addPatternLine");
            
            REcmaHelper::registerFunction(&engine, proto, scale, "scale");
            
            REcmaHelper::registerFunction(&engine, proto, rotate, "rotate");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPattern*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, loadAllFrom, "loadAllFrom");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPattern",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPattern::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPattern(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RPattern
                    * cppResult =
                    new
                    RPattern
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isString()
                ) /* type: QString */
            
                && (
                
                        context->argument(
                        1
                        ).isString()
                ) /* type: QString */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RPattern
                    * cppResult =
                    new
                    RPattern
                    (
                    a0
        ,
    a1
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPattern(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPattern::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPattern"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPattern::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPattern::loadAllFrom
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::loadAllFrom", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::loadAllFrom";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QPair < QString , RPattern * > >'
    QList < QPair < QString , RPattern * > > cppResult =
        RPattern::
       loadAllFrom(a0);
        // return type: QList < QPair < QString , RPattern * > >
                // List of Pairs of ...:
                result = REcmaHelper::pairListToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.loadAllFrom().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::loadAllFrom", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::isValid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::isValid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::isValid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("isValid", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isValid();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.isValid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::isValid", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::hasDots
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::hasDots", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::hasDots";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("hasDots", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->hasDots();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.hasDots().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::hasDots", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::clear
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::clear", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::clear";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("clear", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->clear();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.clear().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::clear", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::getFileName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::getFileName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::getFileName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("getFileName", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getFileName();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.getFileName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::getFileName", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::getName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::getName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::getName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("getName", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'const QString'
    const QString cppResult =
        
               self->getName();
        // return type: const QString
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.getName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::getName", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::isLoaded
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::isLoaded", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::isLoaded";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("isLoaded", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isLoaded();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.isLoaded().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::isLoaded", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::load
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::load", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::load";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("load", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->load();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.load().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::load", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::getPatternLines
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::getPatternLines", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::getPatternLines";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("getPatternLines", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QList < RPatternLine >'
    QList < RPatternLine > cppResult =
        
               self->getPatternLines();
        // return type: QList < RPatternLine >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.getPatternLines().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::getPatternLines", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::addPatternLine
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::addPatternLine", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::addPatternLine";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("addPatternLine", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RPatternLine */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RPatternLine*
                    ap0 =
                    qscriptvalue_cast<
                    RPatternLine*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RPattern: Argument 0 is not of type RPatternLine*.",
                               context);                    
                    }
                    RPatternLine& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->addPatternLine(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.addPatternLine().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::addPatternLine", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::scale
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::scale", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::scale";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("scale", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->scale(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.scale().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::scale", context, engine);
            return result;
        }
         QScriptValue
        REcmaPattern::rotate
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPattern::rotate", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPattern::rotate";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPattern* self = 
                        getSelf("rotate", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->rotate(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPattern.rotate().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPattern::rotate", context, engine);
            return result;
        }
         QScriptValue REcmaPattern::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPattern* self = getSelf("toString", context);
    
    QString result;
    
            QDebug d(&result);
            if (self!=NULL) {
                d << *self;
            }
            else {
                d << "NULL";
            }
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPattern::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPattern* self = getSelf("RPattern", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPattern* REcmaPattern::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPattern* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPattern >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPattern.%1(): "
                        "This object is not a RPattern").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPattern* REcmaPattern::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPattern* selfBase = getSelf(fName, context);
                RPattern* self = dynamic_cast<RPattern*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPattern >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPattern.%1(): "
                    "This object is not a RPattern").arg(fName),
                    context);
            }

            return self;
            


        }
        