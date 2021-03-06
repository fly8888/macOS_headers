//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSString, PKPayment, PKPaymentToken, PKServiceProviderPurchase;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam
{
    PKPaymentToken *_paymentToken;
    PKPayment *_payment;
    PKServiceProviderPurchase *_purchase;
    NSString *_purchaseTransactionIdentifier;
}

+ (id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2;
+ (id)paramWithPayment:(id)arg1;
+ (id)paramWithPaymentToken:(id)arg1;
@property(copy, nonatomic) NSString *purchaseTransactionIdentifier; // @synthesize purchaseTransactionIdentifier=_purchaseTransactionIdentifier;
@property(retain, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(retain, nonatomic) PKPayment *payment; // @synthesize payment=_payment;
@property(retain, nonatomic) PKPaymentToken *paymentToken; // @synthesize paymentToken=_paymentToken;
- (void).cxx_destruct;
- (id)description;

@end

