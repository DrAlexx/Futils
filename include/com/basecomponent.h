#pragma once

#include <com/iunknown.h>
#include <util/refobject.h>

namespace COM{

class BaseComponent : public IUnknown
{
public:
    BaseComponent(IUnknown *owner=nullptr);
    virtual ~BaseComponent() override{}

    virtual int addRef() override;
    virtual int release() override;
    virtual HResult QueryInterface(const std::string& id, void** ppv) override;

private:
    RefObject   ref;
    IUnknown    *owner;
};

}//namespace COM
