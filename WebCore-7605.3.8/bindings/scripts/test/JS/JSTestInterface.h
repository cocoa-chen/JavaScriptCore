/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#pragma once

#if ENABLE(Condition1) || ENABLE(Condition2)

#include "JSDOMWrapper.h"
#include "TestInterface.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class WEBCORE_EXPORT JSTestInterface : public JSDOMWrapper<TestInterface> {
public:
    using Base = JSDOMWrapper<TestInterface>;
    static JSTestInterface* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TestInterface>&& impl)
    {
        JSTestInterface* ptr = new (NotNull, JSC::allocateCell<JSTestInterface>(globalObject->vm().heap)) JSTestInterface(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSDOMGlobalObject&);
    static JSC::JSObject* prototype(JSC::VM&, JSDOMGlobalObject&);
    static TestInterface* toWrapped(JSC::VM&, JSC::JSValue);
    static bool put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static bool putByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::JSValue, bool shouldThrow);
    static void destroy(JSC::JSCell*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);

    // Custom attributes
#if ENABLE(Condition22) || ENABLE(Condition23)
    JSC::JSValue implementsStr3(JSC::ExecState&) const;
#endif
#if ENABLE(Condition22) || ENABLE(Condition23)
    void setImplementsStr3(JSC::ExecState&, JSC::JSValue);
#endif
#if ENABLE(Condition11) || ENABLE(Condition12)
    JSC::JSValue supplementalStr3(JSC::ExecState&) const;
#endif
#if ENABLE(Condition11) || ENABLE(Condition12)
    void setSupplementalStr3(JSC::ExecState&, JSC::JSValue);
#endif

    // Custom functions
#if ENABLE(Condition22) || ENABLE(Condition23)
    JSC::JSValue implementsMethod3(JSC::ExecState&);
#endif
#if ENABLE(Condition11) || ENABLE(Condition12)
    JSC::JSValue supplementalMethod3(JSC::ExecState&);
#endif
protected:
    JSTestInterface(JSC::Structure*, JSDOMGlobalObject&, Ref<TestInterface>&&);

    void finishCreation(JSC::VM&);
};

class JSTestInterfaceOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TestInterface*)
{
    static NeverDestroyed<JSTestInterfaceOwner> owner;
    return &owner.get();
}

inline void* wrapperKey(TestInterface* wrappableObject)
{
    return wrappableObject;
}

WEBCORE_EXPORT JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestInterface&);
inline JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestInterface* impl) { return impl ? toJS(state, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Ref<TestInterface>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::ExecState* state, JSDOMGlobalObject* globalObject, RefPtr<TestInterface>&& impl) { return impl ? toJSNewlyCreated(state, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<TestInterface> {
    using WrapperClass = JSTestInterface;
    using ToWrappedReturnType = TestInterface*;
};

} // namespace WebCore

#endif // ENABLE(Condition1) || ENABLE(Condition2)