//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface BusiF2FPlaceOrderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(nonatomic) unsigned int mchTime; // @dynamic mchTime;
@property(retain, nonatomic) NSString *mchType; // @dynamic mchType;
@property(retain, nonatomic) NSString *payerDesc; // @dynamic payerDesc;
@property(retain, nonatomic) NSString *qrcodeId; // @dynamic qrcodeId;
@property(retain, nonatomic) NSString *rcverDesc; // @dynamic rcverDesc;
@property(retain, nonatomic) NSString *rcvrTicket; // @dynamic rcvrTicket;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int totalAmount; // @dynamic totalAmount;
@property(retain, nonatomic) NSString *wifiBssid; // @dynamic wifiBssid;
@property(nonatomic) unsigned int wifiUpdatatime; // @dynamic wifiUpdatatime;

@end

