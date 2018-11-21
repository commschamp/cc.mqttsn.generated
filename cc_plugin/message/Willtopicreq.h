#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "cc_plugin/Message.h"

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

class WilltopicreqImpl;
class Willtopicreq : public mqttsn::cc_plugin::Message
{
public:
    Willtopicreq();
    Willtopicreq(const Willtopicreq&) = delete;
    Willtopicreq(Willtopicreq&&) = delete;
    virtual ~Willtopicreq();
    Willtopicreq& operator=(const Willtopicreq& other);
    Willtopicreq& operator=(Willtopicreq&&);

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(comms_champion::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const comms_champion::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<WilltopicreqImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn



